0x1A. C - Hash tables
Hash Table - is a colection of data items or
    - is a data structure that impeliments an associate array or dictionary, which is an abstract data type that maps keys and value.

*associate array - stores set of {keys, value} pairs and allows insertion, deletion, and lookup(search) with constant unique keys.

Hashing - technique that is used to place items in slots of the hash table using the hash function.
Hash Function - any function that is used to map data of arbitarty size to fixed size values.
The values returned by hash functions are called hash values, hash codes, hashes.

Collision - happens when a hash function generates same index for more than one key
in the hash table.
We can handle collision using the Separate Chaining, which aims to create imdependent chain for all items that have same hash index(use linkedlist)
Oveeflow bucket list store the additional item that collide on the same index.

HashTable Data Structure.
a) item structure.
    typedef struct Ht_item
    {
        char *key;
        char *value;*
    }Ht_item;

b) hashtable structure
    typedef struct HashTable
    {
        Ht_item **items;
        int size;
        int count;
    }HashTable;

Some of the function in the hash table.
1. create items(key, value)pairs.
    by allocating memory for key and value and return a pointer to the item
    use: /*Ht_item * create_item(char *key, char *value)*/
2. create hashtable
    by allocaring memory and setting size, count and items
    use: /*HashTable * create_table(int size)*/
3. free up the items and tables.
    use: void free_item(Ht_item *item)*
         void free_table(HashTable *table)*
4. print/display the index, key and value for each function.
    use: void print_table(HashTable *table)*
5. insert into hashtable.
    use : linked list sequence
6. search an item in the hashtable
7. handle collisions.
8. delete item from hashtable
