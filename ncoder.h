//
//  ncoder.h
//  test
//
//  Created by Benjamin Krebs on 26/04/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef test_ncoder_h
#define test_ncoder_h

class ncoder {
    int symbols;
    int symbolsize;
    
    int create_encoder(int size, int symbols);
    int create_decoder(int size, int symbols);
    
public:
    ncoder(int number_of_symbols, int symbol_size);
    void *decode(void *buffer);
    void encode(void *buffer);
};


#endif
