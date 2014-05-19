#ifndef BITVECTOR_TEST_H      /* -*- C++ -*- */
#define BITVECTOR_TEST_H

#include "BitVector.h"

namespace MFM {

  class BitVectorTest
  {
  private:
    static BitVector<256>* setup();

  public:
    static void Test_RunTests();

    static void Test_bitVectorAllocate();

    static void Test_bitVectorRead();
  
    static void Test_bitVectorSize();

    static void Test_bitVectorWrite();

    static void Test_bitVectorSplitWrites();

  };
} /* namespace MFM */
#endif /*BITVECTOR_TEST_H*/
