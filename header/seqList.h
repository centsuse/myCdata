/**
 * Created by bobo on 2018/6/5.
 * 顺序表
 */

#ifndef DATASTRUCTURE_SEQLIST_H
#define DATASTRUCTURE_SEQLIST_H

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define SEQLIST_INIT_SIZE 8
typedef int ElemType;

typedef struct SeqList {
    ElemType *base;
    int capacity;
    int size;
} SeqList;

void initSeqList(SeqList *list);

#endif //DATASTRUCTURE_SEQLIST_H
