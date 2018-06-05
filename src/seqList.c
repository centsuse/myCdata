/**
 * Created by bobo on 2018/6/5.
 */

#include <stdio.h>
#include "../header/seqList.h"


void initSeqList(SeqList *list) {
    list -> base = (ElemType *)malloc(sizeof(ElemType) * SEQLIST_INIT_SIZE);
    assert(list -> base != NULL);
    list -> capacity = SEQLIST_INIT_SIZE;
    list -> size = 0;
    printf("完成\n");
}