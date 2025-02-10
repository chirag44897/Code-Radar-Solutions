#include <stdio.h>
#include <string.h>

#define MAX_USERS 100

// Define the Subscription structure
struct Subscription {
    char userName[50];
    char type[10];
    int cost;
};

int main() {
    int N;
    scanf("%d", &N);

    struct Subscription users[MAX_USERS];

    // Variables to store counts and revenues
    int basicCount = 0, standardCount = 0, premiumCount = 0;
    int basicRevenue = 0, standardRevenue = 0, premiumRevenue = 0;

    // Reading user subscriptions
    for (int i = 0; i < N; i++) {
        scanf("%s %s %d", users[i].userName, users[i].type, &users[i].cost);

        // Categorizing users based on subscription type
        if (strcmp(users[i].type, "Basic") == 0) {
            basicCount++;
            basicRevenue += users[i].cost;
        } else if (strcmp(users[i].type, "Standard") == 0) {
            standardCount++;
            standardRevenue += users[i].cost;
        } else if (strcmp(users[i].type, "Premium") == 0) {
            premiumCount++;
            premiumRevenue += users[i].cost;
        }
    }

    // Printing the required output
    printf("Basic: %d Users, Revenue: %d\n", basicCount, basicRevenue);
    printf("Standard: %d Users, Revenue: %d\n", standardCount, standardRevenue);
    printf("Premium: %d Users, Revenue: %d\n", premiumCount, premiumRevenue);

    return 0;
}