#ifndef CATTPSSetObtentionMode_H
#define CATTPSSetObtentionMode_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1 
 */

/**
 * Defines the differents sannning modes that can be used to obtain a TPSSet.
 * @see CATITPSServices
 *     CreateIfMissing : search a TPSSet in context, if nothing found create a new one.
 *     NoCreation       : search a TPSSet in context, if nothing found output value *opiSet is NULL.
 *     CreateNew       : this option is obsolete, replace it by CreateIfMissing.
 */
enum  CATTPSSetObtentionMode
{
  CreateIfMissing = 0,
  NoCreation      = 1,
  CreateNew       = 2
};

#endif
