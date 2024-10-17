def fg(username):
    distinct_characters = set(username)
    distinct_count = len(distinct_characters)
    return "CHAT WITH HER!" if distinct_count % 2 == 0 else "IGNORE HIM!"

username = input()
print(fg(username))
