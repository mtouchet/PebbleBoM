#pragma once

typedef enum {
    ListTypeBook = 0x0,
    ListTypeVerses = 0x1,
    ListTypeFavorites = 0x2,
    ListTypeViewer = 0x3
} ListType;

typedef enum {
    TestamentTypeOld = 0x0,
    TestamentTypeNew = 0x1,
} TestamentType;

typedef enum {
    RequestTypeBooks,
    RequestTypeVerses,
    RequestTypeViewer,
    RequestTypeCancel,
    RequestTypeFavorites,
    RequestTypeToggleFavorite
} RequestType;

const char* testament_to_string(TestamentType testament);

typedef struct {
    int index;
    char name[24];
    int chapters;
} Book;

typedef struct {
    Book book;
    int chapter;
    char range[8];
} Favorite;

enum {
    KEY_LIST,
    KEY_REQUEST,
    KEY_INDEX,
    KEY_TESTAMENT,
    KEY_BOOK,
    KEY_CHAPTER,
    KEY_RANGE,
    KEY_CONTENT,
    KEY_TOKEN
};
