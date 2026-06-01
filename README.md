*This project has been created as part of the 42 curriculum by mda-conc.*

<h1>Description</h1>

This was the first project of 42 school. I have created over 20 functions with the `ft_` prefix as part of **libft**. This project aims to help us understand how these functions work by implementing them from scratch, as they will be useful for our future C school assignments.

The library is divided in 3 parts:

1. **Libc functions** (Part 1)
2. **Additional functions** (Part 2) 
3. **Linked list** (Part 3)


<h1> How to use?</h1>

```bash
# Compile the library
make

# Compile with your code
gcc -Wall -Wextra -Werror -L. -lft your_program.c -o your_program

# Clean
make clean
make fclean
```
<h1>Functions</h1>

<h4>Verifications</h4>
<h5>ft_isalnum:</h5>
<pre><code>int ft_isalnum(int c);</code></pre>

Function that verifies if the parameter is both alphanumeric.Returns 1 if verified positively, 0 if not.

<h5>ft_isalpha:</h5>
<pre><code>int ft_isalpha(int c);</code></pre>

Function that verifies if the parameter is Alphabetic. Returns 1 if verified positively, 0 if not.

<h5>ft_isascii:</h5>
<pre><code>int ft_isascii(int c);</code></pre>

Function that verifies if the parameter is an Ascii character. Returns 1 if verified positively, 0 if not.

<h5>ft_isdigit:</h5>
<pre><code>int ft_isdigit(int c);</code></pre>

Function that verifies if the parameter is a digit. Returns 1 if verified positively, 0 if not.

<h5>ft_isprint:</h5>
<pre><code>int ft_isprint(int c);</code></pre>

Function that verifies if the parameter is a printable character of the Ascii table.Returns 1 if verified positively, 0 if not.

<h4>To functions</h4>

<h5>ft_toupper:</h5>
<pre><code>int ft_toupper(int c);</code></pre>

Function that converts lowercase to uppercase.

<h5>ft_tolower:</h5>
<pre><code>int ft_tolower(int c);</code></pre>

Function that converts uppercase to lowercase.

<h4>String functions</h4>


<h5>ft_atoi:</h5>
<pre><code>int ft_atoi(char *str);</code></pre>

Function that converts a string to integer.

<h5>ft_itoa:</h5>
<pre><code>char	*ft_itoa(int n);</code></pre>

Function that converts an integer to a string, allocating it with <code>malloc</code>.Must be freed with <code>free</code>.

<h5>ft_memchr:</h5>
<pre><code>void	*ft_memchr(const void *s, int c, size_t n);</code></pre>

Function that searches for a byte in the first <code>n</code> bytes of a memory area, not limited by <code>\0</code>. Returns a pointer for the first match or NULL is not found.

<h5>ft_split:</h5>
<pre><code>char	**ft_split(const char *s, char c);</code></pre>

Function that divides a string into an array of strings using a delimitator character, allocating it with malloc. the Final array is <code>NULL-terminated</code>. Each string must be individually freed with <code>free</code>, as the array aswell.

<h5>ft_strchr:</h5>
<pre><code>char *ft_strchr(const char *s, int c);</code></pre>

Function that received a string and a character, returning a pointer to the first occurence of the character in the string.

<h5>ft_strdup:</h5>
<pre><code>char *ft_strdup(const char *s1);
</code></pre>

Function that receives a <code>const char *s1</code> and returns a pointer to a copy of it in dynamically allocated memory. Must be freed with <code>free</code>.

<h5>ft_striteri:</h5>
<pre><code>void	ft_striteri(char *s, void (*f)(unsigned int, char *));
</code></pre>

Function that receives a string and a function pointer as input and applies the function to each character with its index, modifying the string when applicable.

<h5>ft_strjoin:</h5>
<pre><code>char	*ft_strjoin(char const *s1, char const *s2);</code></pre>

Function that receives two strings and concatenates them returning a newly allocated string containing s1 followed by s2. Must be freed with <code>free</code>.

<h5>ft_strlcat:</h5>
<pre><code>size_t	ft_strlcat(char *dest, const char *src, size_t size);</code></pre>

Function that concatenates src to the end of dst, limited by dstsize (size of the destination buffer). Always null terminates. Returns the total length it tried to create.

<h5>ft_strlcpy:</h5>
<pre><code>size_t	ft_strlcpy(char *dest, const char *src, size_t size);</code></pre>

Function that copies src to dest limited by dstsize (size of destination buffer). Always adds <code>'\0'</code> at the end.

<h5>ft_strlen:</h5>
<pre><code>size_t	ft_strlen(const char *s);</code></pre>

Function that counts how many  characters there are in a string, ignoring the <code>'\0'</code>.

<h5>ft_strmapi:</h5>
<pre><code>char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));</code></pre>

Function that creates a copy of a received string, applying a function to each character using its index, without modifying the source.

<h5>ft_strncmp:</h5>
<pre><code>int	ft_strncmp(const char *s1, const char *s2, size_t n);</code></pre>

Function that compares tthe first <code> n</code> characters of s1 and s2.When diferent char are found, returns the difference between the char, based on ascii. returns 0 if the first n characters are equal, negative is s1 < s2 and positive if s1 > s2.

<h5>ft_strnstr:</h5>
<pre><code>char	*ft_strnstr(const char *haystack, const char *needle, size_t len);</code></pre>

Function that locates the firts occurrence of "little" in "big", searching only the first <code> n</code> characters of big. Returns a pointer to match if found, or "NULL" if not found.

<h5>ft_strrchr:</h5>
<pre><code>char	*ft_strrchr(const char *s, int c);</code></pre>

Function that finds the last occurrence of a character in a string, and returns a pointer for that position. Searches from right to left.

<h5>ft_strtrim:</h5>
<pre><code>char	*ft_strtrim(char const *s1, char const *set);</code></pre>

Function that Receives a String and a Set of characters to remove, removing them from the beggining and end of the String. Returns a new string, with <code>malloc</code>. Must be freed with <code>free</code>.

<h5>ft_substr:</h5>
<pre><code>char	*ft_substr(char const *s, unsigned int start, size_t len);</code></pre>

Function that extracts a substring from a string, starting at index "start", for the maximum of <code>len</code> characters. Returns a new string allocated with <code>malloc</code>.Must be freed with <code>free</code>.

<h4>Write functions</h4>

<h5>ft_putchar_fd:</h5>
<pre><code>void ft_putchar_fd(char c, int fd);</code></pre>

Function that writes 1 character in a specific file descriptor. Doesn't give a return as it has void as return. User chooses where to write the character by selecting file descriptor 0,1,2 3 or others.

<h5>ft_putstr_fd:</h5>
<pre><code>void ft_putstr_fd(char *s, int fd);</code></pre>

Function that writes a whole string in a specific file descriptor. Doesn't give a return as it has void as return. User chooses where to write the string by selecting file descriptor 0,1,2 3 or others.

<h5>ft_putendl_fd:</h5>
<pre><code>void ft_putendl_fd(char *s, int fd);</code></pre>

Function that writes a whole string in a specific file descriptor but ads a new line in the end of it. Doesn't give a return as it has void as return. User chooses where to write the string by selecting file descriptor 0,1,2 3 or others.

<h5>ft_putnbr_fd:</h5>
<pre><code>void ft_putnbr_fd(int n, int fd);</code></pre>

Function that writes an integer to a specific file descriptor. Doesn't give a return as it has void as return. User chooses where to write the integer by selecting file descriptor 0,1,2 3 or others.

<h4>Memory functions:</h4>

<h5>ft_bzero:</h5>
<pre><code>void	ft_bzero(void *s, size_t n);</code></pre>

Function that sets the first <code>n</code> bytes of memory, starting at <code>*s</code> to null bytes. Returns nothing (void)

<h5>ft_calloc:</h5>
<pre><code>void	*ft_calloc(size_t count, size_t size);</code></pre>

Function that allocates a determined amount of bytes, all set to zero. Returns void pointer ou <code>NULL</code> se falhar.

<h5>ft_memcmp:</h5>
<pre><code>int	ft_memcmp(const void *s1, const void *s2, size_t n);</code></pre>

Function that compares the first <code>n</code> bytes of two memory blocks (s1 & s2). Returns 0 if identical, negative if s1 < s2 and positive if s1 > s2.

<h5>ft_memcpy:</h5>
<pre><code>void	*ft_memcpy(void *dest, const void *src, size_t count);</code></pre>

Function that copies count bytes from src to dest. Returns a dest pointer. Undefined behavior if src/dest overlap. 

<h5>ft_memmove:</h5>
<pre><code>void	*ft_memmove(void *dst, const void *src, size_t len);</code></pre>

Function that copies len bytes from src to dest. Safer than ft_memcpy, avoiding overlap. Returns the dest pointer.

<h5>ft_memset:</h5>
<pre><code>void	*ft_memset(void *dest, int c, size_t count);</code></pre>

Function that fill the first count bytes of dest with the assigned character. Returns dest.

<h4>Linked lists:</h4>

Linked lists are dynamic structures on which each elemente contains data and pointers.

This allows us to grow or shrink with no need for reallocation.

<h5>ft_lstnew:</h5>
<pre><code>t_list	*ft_lstnew(void *content);</code></pre>

The first step of a linked list, creates a new node, allocating memory for it ans storing data. 

<h5>ft_lstadd_front:</h5>
<pre><code>void	ft_lstadd_front(t_list **lst, t_list *new);</code></pre>

Adds a new node at the beginning of the list. Receives from ft_lstnew.

<h5>ft_lstsize:</h5>
<pre><code>int	ft_lstsize(t_list *lst);</code></pre>

Counts the number of nodes in the list.

<h5>ft_lstlast:</h5>
<pre><code>t_list	*ft_lstlast(t_list *lst);</code></pre>

Finds the last node of the list, used with ft_lstadd_back.

<h5>ft_lstadd_back:</h5>
<pre><code>void ft_lstadd_back(t_list **lst, t_list *new);</code></pre>

Adds a new node to the end of the linked list.

<h5>ft_lstadd_back:</h5>
<pre><code>void ft_lstadd_back(t_list **lst, t_list *new);</code></pre>

Adds a new node to the end of the linked list.

<h5>ft_lstdelone:</h5>
<pre><code>void ft_lstdelone(t_list *lst, void (*del)(void));</code></pre>

Deletes a specific node from the list (freeing memmory).

<h5>ft_lstclear:</h5>
<pre><code>void ft_lstclear(t_list **lst, void (*del)(void*));</code></pre>

Deletes and frees the whole list.

<h5>ft_lstiter:</h5>
<pre><code>void ft_lstiter(t_list *lst, void (*f)(void *));</code></pre>

Applies a function to each node content.

<h5>ft_lstmap:</h5>
<pre><code>t_list *ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))</code></pre>

Creates a new list applying a function to each content of the original one.

<h1>Resources</h1>

Man pages

https://42-cursus.gitbook.io/

https://codergirl-al.com/

https://medium.com/@piolodale

 **AI Usage**: Used Perplexity AI to **clarify function specifications** and **verify function descriptions** for README accuracy.
>>>>>>> baf7ca3 (project submited)
