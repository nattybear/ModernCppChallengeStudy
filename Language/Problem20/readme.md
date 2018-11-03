## Container any, all, none

Write a set of general-purpose functions that enable checking whether any, all, or none of the specified arguments are present in a given container. These functions should make it possible to write code as follows:
```
std::vector<int> v{1, 2, 3, 4, 5, 6};
assert(contains_any(v, 0, 3, 30));

std::array<int, 6> a{{1, 2, 3, 4, 5, 6}};
assert(contains_all(a, 1, 3, 5, 6));

std::list<int> l{1, 2, 3, 4, 5, 6};
assert(!contains_none(1, 0, 6));
```

