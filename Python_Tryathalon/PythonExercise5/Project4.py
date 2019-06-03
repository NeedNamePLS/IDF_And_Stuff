#Names 2, Name Harder

def main():
    IsItThere = 0
    names = ['This','Is','A','Test','I like pancakes']
    for i in range(len(names)):
        if names[i] == 'Ruby':
            IsItThere = 1
    if IsItThere == 1:
        print("Hello Ruby")
    else:
        print("No Ruby")

main()