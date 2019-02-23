#include "libft.h"

t_list* merge_sort_list_recursive(t_list *list,int (*compare)(t_list *one,t_list *two))
{
    // Trivial case.
    if (!list || !list->next)
        return list;

    t_list *right = list,
          *temp  = list,
          *last  = list,
          *result = 0,
          *next   = 0,
          *tail   = 0;

    // Find halfway through the list (by running two pointers, one at twice the speed of the other).
    while (temp && temp->next)
    {
        last = right;
        right = right->next;
        temp = temp->next->next;
    }

    // Break the list in two. (prev pointers are broken here, but we fix later)
    last->next = 0;

    // Recurse on the two smaller lists:
    list = merge_sort_list_recursive(list, compare);
    right = merge_sort_list_recursive(right, compare);

    // Merge:
    while (list || right)
    {
        // Take from empty lists, or compare:
        if (!right) {
            next = list;
            list = list->next;
        } else if (!list) {
            next = right;
            right = right->next;
        } else if (compare(list, right) < 0) {
            next = list;
            list = list->next;
        } else {
            next = right;
            right = right->next;
        }
        if (!result) {
            result=next;
        } else {
            tail->next=next;
        }
        tail = next;
    }
    return result;
}
