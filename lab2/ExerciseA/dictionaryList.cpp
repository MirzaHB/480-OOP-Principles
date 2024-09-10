// ENSF 480 - Lab 2 - Exercise A
// Completed by: Mirza Hassan Baig
// Submission Date: Oct 1, 2023
// File Name: dictionaryList.cpp

#include <assert.h>
#include <iostream>
#include <stdlib.h>
#include "dictionaryList.h"
#include "mystring_B.h"

using namespace std;

ostream &operator<<(ostream &COUT, DictionaryList &DL)
{
  Node *originalCursor = DL.cursorM;
  DL.go_to_first();
  while (DL.cursor_ok())
  {
    COUT << DL.cursor_key() << "  " << DL.cursor_datum().c_str() << endl;
    DL.step_fwd();
  }
  DL.cursorM = originalCursor;
  return COUT;
}

const Datum &DictionaryList::operator[](int pos)
{
  Node *tempCursor = headM;
  for (int i = 0; i < pos; i++)
  {
    tempCursor = tempCursor->nextM;
  }
  return tempCursor->datumM;
}

Node::Node(const Key &keyA, const Datum &datumA, Node *nextA)
    : keyM(keyA), datumM(datumA), nextM(nextA)
{
}

DictionaryList::DictionaryList()
    : sizeM(0), headM(0), cursorM(0)
{
}

DictionaryList::DictionaryList(const DictionaryList &source)
{
  copy(source);
}

DictionaryList &DictionaryList::operator=(const DictionaryList &rhs)
{
  if (this != &rhs)
  {
    destroy();
    copy(rhs);
  }
  return *this;
}

DictionaryList::~DictionaryList()
{
  destroy();
}

int DictionaryList::size() const
{
  return sizeM;
}

int DictionaryList::cursor_ok() const
{
  return cursorM != 0;
}

const Key &DictionaryList::cursor_key() const
{
  assert(cursor_ok());
  return cursorM->keyM;
}

const Datum &DictionaryList::cursor_datum() const
{
  assert(cursor_ok());
  return cursorM->datumM;
}

void DictionaryList::insert(const int &keyA, const Mystring &datumA)
{
  // Add new node at head?
  if (headM == 0 || keyA < headM->keyM)
  {
    headM = new Node(keyA, datumA, headM);
    sizeM++;
  }

  // Overwrite datum at head?
  else if (keyA == headM->keyM)
    headM->datumM = datumA;

  // Have to search ...
  else
  {

    // POINT ONE

    // if key is found in list, just overwrite data;
    for (Node *p = headM; p != 0; p = p->nextM)
    {
      if (keyA == p->keyM)
      {
        p->datumM = datumA;
        return;
      }
    }

    // OK, find place to insert new node ...
    Node *p = headM->nextM;
    Node *prev = headM;

    while (p != 0 && keyA > p->keyM)
    {
      prev = p;
      p = p->nextM;
    }

    prev->nextM = new Node(keyA, datumA, p);
    sizeM++;
  }
  cursorM = NULL;
}

void DictionaryList::remove(const int &keyA)
{
  if (headM == 0 || keyA < headM->keyM)
    return;

  Node *doomed_node = 0;

  if (keyA == headM->keyM)
  {
    doomed_node = headM;
    headM = headM->nextM;

    // POINT TWO
  }
  else
  {
    Node *before = headM;
    Node *maybe_doomed = headM->nextM;
    while (maybe_doomed != 0 && keyA > maybe_doomed->keyM)
    {
      before = maybe_doomed;
      maybe_doomed = maybe_doomed->nextM;
    }

    if (maybe_doomed != 0 && maybe_doomed->keyM == keyA)
    {
      doomed_node = maybe_doomed;
      before->nextM = maybe_doomed->nextM;
    }
  }
  if (doomed_node == cursorM)
    cursorM = 0;

  delete doomed_node; // Does nothing if doomed_node == 0.
  sizeM--;
}

void DictionaryList::go_to_first()
{
  cursorM = headM;
}

void DictionaryList::step_fwd()
{
  assert(cursor_ok());
  cursorM = cursorM->nextM;
}

void DictionaryList::make_empty()
{
  destroy();
  sizeM = 0;
  cursorM = 0;
}

// The following function are supposed to be completed by the stuents, as part
// of the exercise B part II. the given fucntion are in fact place-holders for
// find, destroy and copy, in order to allow successful linking when you're
// testing insert and remove. Replace them with the definitions that work.

void DictionaryList::find(const Key &keyA)
{
  cursorM = 0;
  if (headM == 0)
  {
    return;
  }

  if (headM->keyM == keyA)
  {
    cursorM = headM;
    return;
  }
  Node *p = headM;
  while (p != nullptr)
  {
    if (p->keyM == keyA)
    {
      cursorM = p;
      return;
    }
    p = p->nextM;
  }
  return;
}

void DictionaryList::destroy()
{
  Node *curr = headM;
  while (curr != 0)
  {
    Node *temp = curr;
    curr = curr->nextM;
    delete temp;
  }
  headM = 0;
}

void DictionaryList::copy(const DictionaryList &source)
{
  if (source.headM == 0)
  {
    sizeM = 0;
    headM = 0;
    cursorM = 0;
    return;
  }
  sizeM = source.sizeM;
  Node *currOld = source.headM;
  headM = new Node(currOld->keyM, currOld->datumM, 0);
  Node *currNew = headM;

  while (currOld->nextM != 0)
  {
    currOld = currOld->nextM;
    Node *newNode = new Node(currOld->keyM, currOld->datumM, 0);
    currNew->nextM = newNode;
    currNew = newNode;
  }
  Node *cursorWhere = headM;
  while (cursorWhere != 0 && source.cursorM != 0)
  {
    if (source.cursor_key() == cursorWhere->keyM)
    {
      cursorM = cursorWhere;
      break;
    }
    cursorWhere = cursorWhere->nextM;
  }
}
