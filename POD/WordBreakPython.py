def jake(s, w):
    str_set = set(w)
    dp = [False] * (len(s) + 1)
    dp_map = {}
    lengths = set(len(word) for word in w)
    dp_map[0] = [""]
    dp[0] = True
    
    for i in range(len(s)):
        for h in lengths:
            if i + 1 >= h:
                j = i + 1 - h
                cur = s[j:i+1]
                if dp[j] and cur in str_set:
                    dp[i+1] = True
    
    if not dp[len(s)]:
        return []
    
    for i in range(len(s)):
        for h in lengths:
            if i + 1 >= h:
                j = i + 1 - h
                cur = s[j:i+1]
                if dp[j] and cur in str_set:
                    if (i + 1) not in dp_map:
                        dp_map[i + 1] = []
                    for sb in dp_map[j]:
                        dp_map[i + 1].append(sb + ("" if sb == "" else " ") + cur)
    
    return dp_map.get(len(s), [])

s = input()
n = int(input())
w = [input() for _ in range(n)]
output = jake(s, w)
print("[{}]".format(", ".join(output))) if output else print("[]")