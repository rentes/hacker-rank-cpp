//
// Created by Miguel Rentes on 11/03/17.
//

#include "strings.h"

/**
 * Sample input
 * 4 3
 * <tag1 value = "HelloWorld">
 * <tag2 name = "Name1">
 * </tag2>
 * </tag1>
 * tag1.tag2~name
 * tag1~name
 * tag1~value
 *
 * Sample output
 * Name1
 * Not Found!
 * HelloWorld
 */
int main(void) {
    unsigned int n, q;
    cin >> n >> q;

    string temp;
    vector<string> hrml;
    vector<string> quer;
    cin.ignore();

    for(int i = 0; i < n; i++) {
        getline(cin,temp);
        hrml.push_back(temp);
    }

    for(int i = 0; i < q; i++) {
        getline(cin,temp);
        quer.push_back(temp);
    }

    map<string, string> m;
    vector<string> tag;

    for(int i = 0; i < n; i++) {
        temp=hrml[i];
        temp.erase(remove(temp.begin(), temp.end(), '\"' ),temp.end());
        temp.erase(remove(temp.begin(), temp.end(), '>' ),temp.end());

        if(temp.substr(0,2)=="</") {
            tag.pop_back();
        }
        else {
            stringstream ss;
            ss.str("");
            ss<<temp;
            string t1,p1,v1;
            char ch;
            ss>>ch>>t1>>p1>>ch>>v1;
            string temp1="";
            if(tag.size() > 0) {
                temp1=*tag.rbegin();
                temp1=temp1+"."+t1;
            }
            else
                temp1=t1;
            tag.push_back(temp1);
            m[*tag.rbegin()+"~"+p1]=v1;
            while(ss) {
                ss>>p1>>ch>>v1;
                m[*tag.rbegin()+"~"+p1]=v1;
            }
        }

    }

    for(int i = 0; i < q; i++) {
        if (m.find(quer[i]) == m.end())
            cout << "Not Found!\n";
        else
            cout<<m[quer[i]]<<endl;
    }

    return EXIT_SUCCESS;
}
