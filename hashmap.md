# 哈希表学习笔记（C++）

---

记录学习哈希表（unordered\_map）的基础操作、使用场景和练习过程中遇到的一些关键点。

## 🧩 基础操作

### 创建哈希表

```cpp
unordered_map<int, int> m; // 键和值都是 int 类型
unordered_map<string, int> freq; // 例如用来统计词频
```

### 插入 / 更新

```cpp
m[3] = 7;      // 插入键为3，值为7
m[key]++;      // 若不存在则默认0再加一（统计频率时常用）
```

### 查找键是否存在

```cpp
if (m.count(3)) { /* 存在 */ }
if (m.find(3) != m.end()) { /* 存在 */ }
```

### 删除元素

```cpp
m.erase(3); // 删除键为3的元素
```

### 遍历哈希表

```cpp
// 写法一：使用 pair
for (const auto& p : m) {
    cout << p.first << " -> " << p.second << endl;
}

// 写法二（C++17）：结构化绑定
for (auto& [k, v] : m) {
    cout << k << " -> " << v << endl;
}
```

---

## ✍️ 练习中常见的写法和语法

### 字符遍历

```cpp
for (char c : s) {
    freq[c]++;
}
```

### 字母大小写转换（需要 `#include <cctype>`）

```cpp
tolower(c); // 转小写
toupper(c); // 转大写
```

### 读取整行字符串

```cpp
getline(cin, input); // 用于读取含空格的整行
```

### 判断字符串长度

```cpp
s.length();
s.size(); // 两者等价
```

### 布尔变量标志是否找到

```cpp
bool found = false;
for (...) {
    if (条件满足) {
        found = true;
        break;
    }
}
if (!found) cout << "没找到";
```

---

## 🔁 常见哈希表应用回顾（练习题总结）

1. **统计字符出现频率**（unordered\_map\<char, int>）
2. **判断两个字符串是否是异位词**（两个哈希表比较）
3. **找出只出现一次的数字**（哈希表统计 + 布尔标志）
4. **两数之和**（用哈希表找 target - nums\[i]）
5. **统计英文单词频率**（unordered\_map\<string, int> + getline + tolower）

---

## 🚧 小坑点总结

| 问题             | 错误写法                 | 正确示例                                |
| -------------- | -------------------- | ----------------------------------- |
| 未初始化变量         | `char c; freq[c]++;` | 应在 `for (char c : s)` 中使用           |
| 使用结构化绑定但编译器不支持 | `auto& [k, v] : m`   | 改为 `auto& p : m; p.first, p.second` |
| 数组越界           | `words[i] = ...`     | 需要判断 `i < MAX`                      |

---

这份笔记是自己在刷题过程中总结的，主要为了回顾哈希表的使用方式以及对应语法技巧。
