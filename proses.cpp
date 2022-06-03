#include "../base.h"

Void BaseProject:: proses (){
			//fitur sorting
			int n, i, temp;
			for (i=0; i<n; i++){
		        for (int j=i+1; j<n; j++){
		            if (id[i] < id[j]){
		                temp = id[i];
		                id[i] = id[j];
		                id[j] = temp;
            		}
        		}
    		}
	    for (i=0; i<n; i++){
	        cout << id[i] << ", ";
	    }
	}
				