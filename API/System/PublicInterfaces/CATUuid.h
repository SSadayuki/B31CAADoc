#ifndef __CATUuid
#define __CATUuid

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "JS0CORBA.h"
#include "IUnknown.h"
#include "CATCmpGuid.h"

class CATMarshal;

/**
 * Class that generates Unique Universal Identifier.
 * It is of the form :
 *    <Ethernet card address><pid><time in seconds><time in microseconds>
 * Its size is 16 octets.
 */
class ExportedByJS0CORBA CATUuid
{
	public :
		/**
		 * Constructs a Unique Universal Identifier.
		 */
		CATUuid();
		/**
		 * Constructs a Unique Universal Identifier.
		 * @param iChar
		 *   the UUID in a character form.
		 */
		CATUuid(char *iChar);
		/**
		* Copy constructor.
		*/
		CATUuid(const CATUuid &);
		/**
		* Transform a UUID into a character string.
		* @param oChar
		*   the UUID in a character form.
		*/
		void UUID_to_chaine(char *oChar);
		/**
		* Transform a UUID into a C structure form.
		* @param oStruct
		*   the UUID in a C structure form.
		*/
		void UUID_to_struct(char *oStruct);
		/**
		* Affectation operator.
		* @param iUUID
		*   the input UUID.
		*/
		CATUuid &operator = (const CATUuid &iUUID);
		/**
		* Affectation operator.
		* @param iChar
		*   the input character form of a UUID.
		*/
		CATUuid &operator = (const char * const iChar);
		/**
		* Comparison operator.
		* @param iUUID
		*   the input UUID.
		*/
		int operator == (const CATUuid &iUUID) const;
		/**
		* Comparison operator.
		* @param iUUID
		*   the input UUID.
		*/
		int operator != (const CATUuid &iUUID) const;
		/**
		* Method used to get the UUID value of the given object.
		* @param oChar
		*   the output value of the UUID.
		*/
		void get(unsigned char oChar[16]) const;
		/**
		* Method used to set the UUID value of the given object.
		* @param iChar
		*   the input value of the UUID.
		*/
		void set(unsigned char iChar[16]);
		
		/**
		 * @nodoc
		 */
		void store(CATMarshal& om) const;
		/**
		 * @nodoc
		 */
		void load(CATMarshal& im);

	private :
    union  {
      unsigned char u_bits[16];
      GUID guid;
    };
};

/**
 * @nodoc
 * Function that creates a UUID.
 * @param oChar
 *   the output value of the UUID.
 */
ExportedByJS0CORBA extern int getuuid(unsigned char oChar[16]);

/**
 * @nodoc
 */
inline CATMarshal &operator << (CATMarshal &om, const CATUuid& uuid) {
  uuid.store(om);
  return om;
}

/**
 * @nodoc
 */
inline CATMarshal &operator >> (CATMarshal &im, CATUuid& uuid) {
  uuid.load(im);
  return im;
}

#endif // __CATUuid

