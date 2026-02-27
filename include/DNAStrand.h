#ifndef DNASTRAND_H
#define DNASTRAND_H

//****************************************************************************** 
// File name:    DNAStrand.h
// Author:       CS, Pacific University
// Class:        CS 270
// Assignment:   03 Protein Creation
// Purpose:      Declare the interface for a strand of DNA.
//               A strand is represented by a string containing only
//               the bases A, C, T, and G.
//******************************************************************************

#include <string>
#include <istream>
#include <ostream>
#include <cstddef>

const char ADENINE = 'A';
const char CYTOSINE = 'C';
const char GUANINE = 'G';
const char THYMINE = 'T';
const char URACIL = 'U';
const char NO_BASE = ' ';

class DNAStrand {

public:

  // 1. Default constructor.
  // Initializes the DNA strand to an empty string.
  DNAStrand (const std::string& rcBases = "");

  // 2 & 3. Copy constructor.
  // Initializes the DNA strand using another DNAStrand.
  DNAStrand (const DNAStrand& rcDNAStrand);

  // 4. Sets the DNA strand to rcDNAString.
  // Returns true if rcDNAString contains only uppercase A, C, T, G.
  // Returns false if an illegal character is found.
  // If false is returned, the strand becomes empty.
  bool setDNASequence (const std::string& rcDNAString);

  // 5. Returns the DNA sequence as a string.
  std::string getDNASequence () const;

  // 6. Returns the number of bases in the strand.
  size_t size () const;

  // 7. Retrieves the base at position whichBase.
  // Returns true if whichBase is valid (0 <= whichBase < size()).
  // If valid, assigns the base to rBase.
  // Returns false if whichBase is out of range.
  bool getBase (unsigned int whichBase, char& rBase) const;

  // 8. Reads a DNA strand from an input stream.
  // Attempts to extract a whitespace-delimited string from rcInStream.
  // Returns true if a string is read and contains only uppercase A, C, T, G.
  // Returns false if extraction fails or if the string contains an illegal base.
  // If false is returned due to an illegal base, the strand becomes empty.
  bool read (std::istream& rcInStream);

  // 9. Writes the DNA strand to an output stream.
  void write (std::ostream& rcOutStream) const;

  // 10. Returns true if this strand and rcDNAStrand
  // contain identical DNA sequences.
  bool isEqual (const DNAStrand& rcDNAStrand) const;

  // Returns true if the strand is empty.
  bool isDefault () const;

private:
  std::string mBases;
};

#endif // DNASTRAND_H