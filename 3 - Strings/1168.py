n = int(input())

for i in range(n):
    leds = 0
    led = input()
    for num in led:
        if (num == "1"):
            leds += 2
        if (num == "2"):
            leds += 5
        if (num == "3"):
            leds += 5
        if (num == "4"):
            leds += 4
        if (num == "5"):
            leds += 5
        if (num == "6"):
            leds += 6
        if (num == "7"):
            leds += 3
        if (num == "8"):
            leds += 7
        if (num == "9"):
            leds += 6
        if (num == "0"):
            leds += 6
    print(f"{leds} leds")