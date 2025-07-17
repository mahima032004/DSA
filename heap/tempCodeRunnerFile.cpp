 heap h;

   h.arr[0] = -1;
   h.arr[1]= 100;

   h.arr[2]= 50;
   h.arr[3] = 60;
   h.arr[4] = 40;
   h.arr[5] = 45;
   h.size = 5;
    for(int i =0; i  <= h.size;i++) {
        cout << h.arr[i] << " " ;
    } cout << endl;
    h.insert(110);
    for(int i =0; i<=h.size;i++) cout << h.arr[i] <<  " ";

    return 0;