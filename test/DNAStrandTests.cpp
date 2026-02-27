//****************************************************************************** 
// File name:		DNAStrandTests.cpp
// Author:			CS, Pacific University
// Date:				
// Class:				CS 270
// Assignment:  Protein Creation
// Purpose:			This file is written to unit test all functions that are part
//              of the included interface.
//******************************************************************************

#include <gtest/gtest.h>

#include "../include/DNAStrand.h"
#include <sstream>

// TEST (DNAStrandTest, DNADefault) {
//   DNAStrand cDNAStrand1;
//   EXPECT_EQ ("", cDNAStrand1.getDNASequence ());
// }

// TEST (DNAStrandTest, DNAStrandParameterized) {
//   EXPECT_EQ ("ACGT", DNAStrand ("ACGT").getDNASequence ());
//   EXPECT_EQ ("", DNAStrand ("").getDNASequence ());
//   EXPECT_EQ ("A", DNAStrand ("A").getDNASequence ());
// }

// TEST (DNAStrandTest, DNAStrandParameterizedInvalid) {
//   EXPECT_EQ ("", DNAStrand ("ACTGZ").getDNASequence ());
//   EXPECT_EQ ("", DNAStrand ("ZCTG").getDNASequence ());
//   EXPECT_EQ ("", DNAStrand ("CTGZCTG").getDNASequence ());
//   EXPECT_EQ ("", DNAStrand ("a").getDNASequence ());
//   EXPECT_EQ ("", DNAStrand ("AaA").getDNASequence ());
// }

// TEST (DNAStrandTest, DNAStrandCopyConstructor) {
//   EXPECT_EQ ("ACGT", DNAStrand (DNAStrand ("ACGT")).getDNASequence ());
//   EXPECT_EQ ("", DNAStrand (DNAStrand ("")).getDNASequence ());
//   EXPECT_EQ ("A", DNAStrand (DNAStrand ("A")).getDNASequence ());
//   EXPECT_EQ ("", DNAStrand (DNAStrand ()).getDNASequence ());
// }

// TEST (DNAStrandTest, setDNASequence) {
//   DNAStrand cDNAStrand1 ("ACGT");
//   DNAStrand cDNAStrand2;

//   EXPECT_TRUE (cDNAStrand2.setDNASequence ("A"));
//   EXPECT_EQ ("A", cDNAStrand2.getDNASequence ());
//   EXPECT_TRUE (cDNAStrand2.setDNASequence (""));
//   EXPECT_EQ ("", cDNAStrand2.getDNASequence ());
//   EXPECT_TRUE (cDNAStrand2.setDNASequence ("ACGT"));
//   EXPECT_EQ ("ACGT", cDNAStrand2.getDNASequence ());
//   EXPECT_TRUE (cDNAStrand1.setDNASequence ("T"));
//   EXPECT_EQ ("T", cDNAStrand1.getDNASequence ());
// }

// TEST (DNAStrandTest, setDNASequenceInvalid) {
//   DNAStrand cDNAStrand1 ("ACGT");

//   EXPECT_FALSE (cDNAStrand1.setDNASequence ("ACTGZ"));
//   EXPECT_EQ ("", cDNAStrand1.getDNASequence ());
//   EXPECT_FALSE (cDNAStrand1.setDNASequence ("ZCTG"));
//   EXPECT_EQ ("", cDNAStrand1.getDNASequence ());
//   EXPECT_FALSE (cDNAStrand1.setDNASequence ("CTGZCTG"));
//   EXPECT_EQ ("", cDNAStrand1.getDNASequence ());
//   EXPECT_FALSE (cDNAStrand1.setDNASequence ("a"));
//   EXPECT_EQ ("", cDNAStrand1.getDNASequence ());
//   EXPECT_FALSE (cDNAStrand1.setDNASequence ("AaA"));
//   EXPECT_EQ ("", cDNAStrand1.getDNASequence ());
//   EXPECT_FALSE (cDNAStrand1.setDNASequence ("A C T G"));
//   EXPECT_EQ ("", cDNAStrand1.getDNASequence ());
// }

// TEST (DNAStrandTest, setDNASequencePartialInvalid) {
//   DNAStrand cDNAStrand1 ("ACGT");

//   EXPECT_FALSE (cDNAStrand1.setDNASequence ("ACGZ"));
//   EXPECT_EQ ("", cDNAStrand1.getDNASequence ());
// }

// TEST (DNAStrandTest, getDNASequence) {
//   EXPECT_EQ ("ACGT", DNAStrand ("ACGT").getDNASequence ());
//   EXPECT_EQ ("", DNAStrand ("").getDNASequence ());
//   EXPECT_EQ ("A", DNAStrand ("A").getDNASequence ());
// }

// TEST (DNAStrandTest, size) {
//   EXPECT_EQ (0, DNAStrand ().size ());
//   EXPECT_EQ (1, DNAStrand ("A").size ());
//   EXPECT_EQ (4, DNAStrand ("ACGT").size ());
// }

// TEST (DNAStrandTest, getBase) {
//   DNAStrand cDNAStrand1 ("ACGT");
//   char base = NO_BASE;

//   EXPECT_TRUE (cDNAStrand1.getBase (0, base));
//   EXPECT_EQ ('A', base);
//   EXPECT_TRUE (cDNAStrand1.getBase (1, base));
//   EXPECT_EQ ('C', base);
//   EXPECT_TRUE (cDNAStrand1.getBase (2, base));
//   EXPECT_EQ ('G', base);
//   EXPECT_TRUE (cDNAStrand1.getBase (3, base));
//   EXPECT_EQ ('T', base);

//   EXPECT_TRUE (DNAStrand ("A").getBase (0, base));
//   EXPECT_EQ ('A', base);
// }

// TEST (DNAStrandTest, getBaseInvalid) {
//   DNAStrand cDNAStrand1 ("ACGT");
//   char base = NO_BASE;

//   EXPECT_FALSE (cDNAStrand1.getBase (4, base));
//   EXPECT_FALSE (DNAStrand ().getBase (0, base));
//   EXPECT_FALSE (DNAStrand ("A").getBase (1, base));
// }

// TEST (DNAStrandTest, getBaseDoesNotModifyOnFailure) {
//   DNAStrand cDNAStrand1 ("ACGT");
//   char base = 'X';

//   EXPECT_FALSE (cDNAStrand1.getBase (99, base));
//   EXPECT_EQ ('X', base);
// }

// TEST (DNAStrandTest, read) {
//   DNAStrand cDNAStrand1;
//   std::istringstream cInStream ("ACGT A");
//   std::istringstream cInStream2 ("");

//   EXPECT_TRUE (cDNAStrand1.read (cInStream));
//   EXPECT_EQ ("ACGT", cDNAStrand1.getDNASequence ());
//   EXPECT_TRUE (cDNAStrand1.read (cInStream));
//   EXPECT_EQ ("A", cDNAStrand1.getDNASequence ());
//   EXPECT_FALSE (cDNAStrand1.read (cInStream));
//   EXPECT_FALSE (DNAStrand ().read (cInStream2));
// }

// TEST (DNAStrandTest, readInvalid) {
//   DNAStrand cDNAStrand1;
//   std::istringstream cInStream ("Z ACTZ");

//   EXPECT_FALSE (cDNAStrand1.read (cInStream));
//   EXPECT_EQ ("", cDNAStrand1.getDNASequence ());
//   EXPECT_FALSE (cDNAStrand1.read (cInStream));
//   EXPECT_EQ ("", cDNAStrand1.getDNASequence ());
// }

// TEST (DNAStrandTest, write) {
//   DNAStrand cDNAStrand1 ("ACGT");
//   DNAStrand cDNAStrand2;
//   std::ostringstream cOutStream;

//   cDNAStrand1.write (cOutStream);
//   EXPECT_EQ ("ACGT", cOutStream.str ());
//   cOutStream.str ("");
//   cDNAStrand2.write (cOutStream);
//   EXPECT_EQ ("", cOutStream.str ());
// }

// TEST (DNAStrandTest, isEqual) {
//   DNAStrand cDNAStrand1 ("ACGT");
//   DNAStrand cDNAStrand2 ("ACGT");
//   DNAStrand cDNAStrand3 ("");

//   EXPECT_TRUE (cDNAStrand1.isEqual (cDNAStrand2));
//   EXPECT_TRUE (cDNAStrand2.isEqual (cDNAStrand2));
//   EXPECT_FALSE (cDNAStrand1.isEqual (cDNAStrand3));
//   EXPECT_TRUE (cDNAStrand3.isEqual (DNAStrand ()));
//   EXPECT_FALSE (cDNAStrand1.isEqual (DNAStrand ("A")));
//   EXPECT_FALSE (DNAStrand ("A").isEqual (DNAStrand ("ACGT")));
//   EXPECT_TRUE (DNAStrand ("A").isEqual (DNAStrand ("A")));
//   EXPECT_FALSE (DNAStrand ("ACGT").isEqual (DNAStrand ("A")));
// }