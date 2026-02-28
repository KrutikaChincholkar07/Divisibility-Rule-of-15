num = int(input("Enter a number: "))

# Check divisibility by 3
digit_sum = sum(int(d) for d in str(num))
div3 = (digit_sum % 3 == 0)

# Check divisibility by 5
div5 = (num % 5 == 0)

if div3 and div5:
    print(num, "is divisible by 15")
else:
    print(num, "is not divisible by 15")
