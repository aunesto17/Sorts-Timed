//
//  main.cpp
//  Sorts_2015
//
//  Created by Alexander Arturo Baylon Ibanez on 8/09/15.
//  Copyright (c) 2015 Alexander Arturo Baylon Ibanez. All rights reserved.
//

#include "sorts.h"

int main(int argc, const char * argv[]) {
    
    auto tam = 10000000;
    auto random_data = crear_vector_random(tam);
    
    /*
    for (int i=0; i<100; i++) {
        cout << "(" << i << ")" << " " << random_data[i] << endl;
    }
    */
    
//    int *data = (int*)malloc (100 * sizeof(*data));
//    for (int j=0; j<100; j++) {
//        data[j] = random_data[j];
//    }
    
    /*
    for (int i=0; i<100; i++) {
        cout << "(" << i << ")" << " " << data[i] << endl;
    }*/
    
    
    
    vector<int> D = {4,1,3,2,16,9,10,14,8,7};
    //construirMaxHeap(D, 10);
    
    /*
    cout << "HEAP SORT" << endl;
    heapSort(random_data, 100);
    for (int i=0; i<100; i++) {
        cout << "(" << i << ")" << " " << random_data[i] << endl;
    }
    */
   
    /*
    bubbleSort(random_data, 100);
    for (int i=0; i<100; i++) {
        cout << "(" << i << ")" << " " << random_data[i] << endl;
    }
     */
    
    /*
    selectSort(random_data, 100);
    for (int i=0; i<100; i++) {
        cout << "(" << i << ")" << " " << random_data[i] << endl;
    }
     */
    
    /*
    insertSort(random_data, 100);
    for (int i=0; i<100; i++) {
        cout << "(" << i << ")" << " " << random_data[i] << endl;
    }
     */
    
    clock_t tstart,tstop;
    tstart = clock();
    mergeSort(random_data, 0, tam);
    tstop = clock();
    
    auto tiempo1 = tstop - tstart;
    
    cout << "Tiempo(" << tam << "): " << tiempo1/(double) CLOCKS_PER_SEC <<  " segundos" << endl;
    printf("time elapsed : %.4lf seconds\n", (tstop - tstart)/((double) CLOCKS_PER_SEC));

    //heapSort(random_data, 100);
    
    /*
    for (int i=0; i<100; i++) {
        cout << "(" << i << ")" << " " << random_data[i] << endl;
    }
    */
    cout << "FIN" << endl;
    return 0;
}
