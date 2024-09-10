import math

# Total number of outcomes
total_outcomes = math.comb(11, 2)

# Favorable outcomes
favorable_outcomes = math.comb(5, 2)

# Probability
probability = favorable_outcomes / total_outcomes
print(total_outcomes, favorable_outcomes, probability)