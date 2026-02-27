//****************************************************************************** 
// File name:    main.cpp
// Author:       CS, Pacific University
// Date:         
// Class:        CS 270
// Assignment:   03 Protein Creation
// Purpose:      Simple driver to exercise the DNAStrand ADT.
//******************************************************************************

#include <iostream>
#include "../include/DNAStrand.h"
#include <cstdlib>

int main () {

  // DNAStrand cStrand1;
  // DNAStrand cStrand2 ("ACGT");
  // DNAStrand cStrand3 (cStrand2);

  // std::cout << "Strand1 (default): " << cStrand1.getDNASequence () << std::endl;
  // std::cout << "Strand2: " << cStrand2.getDNASequence () << std::endl;
  // std::cout << "Strand3 (copy of Strand2): "
  //   << cStrand3.getDNASequence () << std::endl;

  // std::cout << "\nTesting setDNASequence:\n";
  // if (cStrand1.setDNASequence ("ACT")) {
  //   std::cout << "Strand1 set to: "
  //     << cStrand1.getDNASequence () << std::endl;
  // }
  // else {
  //   std::cout << "Invalid DNA sequence\n";
  // }

  // std::cout << "\nTesting invalid set:\n";
  // if (!cStrand1.setDNASequence ("AZT")) {
  //   std::cout << "Invalid DNA rejected. Strand1 now: "
  //     << cStrand1.getDNASequence () << std::endl;
  // }

  // std::cout << "\nTesting size:\n";
  // std::cout << "Strand2 size: " << cStrand2.size () << std::endl;

  // std::cout << "\nTesting getBase:\n";
  // char base = NO_BASE;
  // if (cStrand2.getBase (2, base)) {
  //   std::cout << "Base at position 2 in Strand2: "
  //     << base << std::endl;
  // }
  // else {
  //   std::cout << "Invalid index\n";
  // }

  // std::cout << "\nTesting comparison:\n";
  // if (cStrand2.isEqual (cStrand3)) {
  //   std::cout << "Strand2 and Strand3 are equal\n";
  // }
  // else {
  //   std::cout << "Strands are not equal\n";
  // }

  // std::cout << "\nTesting read from cin (enter a DNA string): ";
  // if (cStrand1.read (std::cin)) {
  //   std::cout << "You entered: "
  //     << cStrand1.getDNASequence () << std::endl;
  // }
  // else {
  //   std::cout << "Read failed\n";
  // }

  return EXIT_SUCCESS;
}