//
//  main.cpp
//  LockCombination - permutation
//
//  Created by Eun Jae Lee on 4/12/17.
//  Copyright © 2017 Eun Jae Lee. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {

    for (int left=0; left<10; left++) {
        for (int middle=0; middle<10; middle++) {
            for (int right=0; right<10; right++) {
                cout<<left<<" "<<middle<<" "<<right<<endl;
            }
        }
    }
    return 0;
}
