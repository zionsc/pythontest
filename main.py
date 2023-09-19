def coin_combinations(coins, target):
    # Initialize a list with length target + 1, with one way to make up 0 cents
    dp = [1] + [0] * target
    
    # For each coin, update the number of ways to make up each total
    for coin in coins:
        for i in range(coin, target + 1):
            dp[i] += dp[i - coin]

    
    return dp[target]


# Define the available coins and the target amount
coins = [1, 8, 21, 55]
target = 2023

# Get the number of combinations
result = coin_combinations(coins, target)
print(f'There are {result} ways to make up 2023 cents with the given coins.')
