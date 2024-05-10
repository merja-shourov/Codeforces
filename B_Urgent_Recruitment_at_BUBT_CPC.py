
for _ in range(int(input())):
    n = int(input())
    team_list = []
    for _ in range(n):
        team = input()
        team_list.append(team.count('1'))
    print(len(set(team_list)))
        
