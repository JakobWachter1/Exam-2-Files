void inplacemerge(int arr[],  int l,  int middle,  int r) { 	
    int start2 = middle + 1; 	
    if (arr[middle] <= arr[start2]) { 		
        return; 	
        } 	
        while (l <= middle && start2 <= r) { 		
            if (arr[l] <= arr[start2]) { 			
                l++; 	
                	} 		else { 		
                        	int val = arr[start2]; 			
                            int index = start2; 			
                            while (index != l) { 			
                                
                                	arr[index] = arr[index - 1]; 			
                                    	index--; 			} 			
                                        arr[l] = val; 		 
                                        l++; 			
                                        middle++; 			
                                        start2++; 		
                            } 	
        } 
}
