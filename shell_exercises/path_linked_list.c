#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Node
{
    char *dir;
    struct Node *next;
} Node;

Node *build_path_list(char **env)
{
    char *path = NULL;
    Node *head = NULL, *temp = NULL;

    for (int i = 0; env[i] != NULL; i++)
    {
        if (strncmp(env[i], "PATH=", 5) == 0)
        {
            path = env[i] + 5;
            break;
        }
    }

    if (path != NULL)
    {
        char *token = strtok(path, ":");
        while (token != NULL)
        {
            Node *new_node = malloc(sizeof(Node));
            new_node->dir = strdup(token);
            new_node->next = NULL;
            if (head == NULL)
                head = new_node;
            else
                temp->next = new_node;
            temp = new_node;
            token = strtok(NULL, ":");
        }
    }
    return head;
}

int main(int argc, char *argv[], char *env[])
{
    Node *path_list = build_path_list(env);
    Node *temp = path_list;

    while (temp != NULL)
    {
        printf("%s\n", temp->dir);
        temp = temp->next;
    }
    return 0;
}
