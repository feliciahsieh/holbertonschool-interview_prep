#ifndef SORT_H
#define SORT_H

void siftDown(int *heap, size_t root, size_t end, size_t size);
void print_array(const int *array, size_t size);
void heap_sort(int *array, size_t size);

#endif /* SORT_H */
