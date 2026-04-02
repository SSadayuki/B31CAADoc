# Importing Functional Specification from a CATPart to a Basic Feature Structure

## Mission

This use case is intended to help you to import functional specifications from a CATPart to a basic feature structure. 

**BEWARE:** this code sample demonstrates L0 API only provided for beta testing purposes.

## Abstract
This article discusses the CAAFmoImportFunctionalSpecsMain use case. This use case explains how to import functional specifications from a CATPart to a basic feature structure.
- What You Will Learn With This Use Case 
- The CAAFmoImportFunctionalSpecsMain Use Case  
    - What Does CAAFmoImportFunctionalSpecsMain Do 
    - How to Launch CAAFmoImportFunctionalSpecsMain
    - Where to Find the CAAFmoImportFunctionalSpecsMain Code
- Step-by-Step 
- In Short 
- References

## The CAAFmoImportFunctionalSpecsMain Use Case
CAAFmoImportFunctionalSpecsMain is a use case of the CAAFmoFuncModInterfaces.edu framework that illustrates CATFmoFuncModInterfaces framework capabilities.

## What Does CAAFmoImportFunctionalSpecsMain Do
The goal of CAAFmoImportFunctionalSpecsMain use case is to show how to import functional specifications from a CATPart to a basic feature structure. We illustrate this by retrieving the main functional set and then retrieving the already created four functional sets with appropriate names. Then we import each Functional Shellable in the FunctionalSet_ShellableImports. The final part with functional imports is saved in a document. More precisely CAAFmoImportFunctionalSpecsMain:

- Retrieves the basic feature structure from Final part.
- Creates Functional imports. 
- Retrieves Modifiers of a functional specification. 
- Saves the part with functional imports in a CATPart document whose path is the third argument passed when launching CAAFmoImportFunctionalSpecsMain.

## How to launch CAAFmoImportFunctionalSpecsMain
To launch CAAFmoImportFunctionalSpecsMain, you will need to set up the build time environment, then compile CAAFmoImportFunctionalSpecsMain along with its prerequisites, set up the run time environment, and then execute the use case.
- With Windows
e:> CAAFmoImportFunctionalSpecsMain outputDirectory\PartCM1.CATPart 
- With UNIX
$ CAAFmoImportFunctionalSpecsMain outputDirectory/PartCM1.CATPart 
where:
outputDirectory		 The directory into which PartCM1.CATPart  will be   stored
PartCM1.CATPart		The file that contains the features created

## Where to Find the CAAFmoImportFunctionalSpecsMain Code
The CAAFmoImportFunctionalSpecsMain use case is made of a single class named CAAFmoImportFunctionalSpecsMain located in the CAAFmoImportFunctionalSpecsMain.m module of the CAAFmoFuncModInterfaces.edu framework:
Windows	InstallRootDirectory\CAAFmoFuncModINterfaces.edu\
CAAFmoImportFunctionalSpecsMain.m \
Unix	InstallRootDirectory/CAAFmoFuncModINterfaces.edu/
CAAFmoImportFunctionalSpecsMain.m /
where InstallRootDirectory is the directory where the CAA CD-ROM is installed.

## Step-by-Step
There are nine main steps in CAAFmoImportFunctionalSpecsMain:
1.	Prolog 
2.	Retrieving the Part with Input Data
3.	Retrieving the Basic Feature Structure to add the Functional Import	 
4.	Retrieving Four Functional Sets, with convenient name in Initial Part
5.	Retrieving Four Functional Sets with convenient name in Final Part
6.	Importing each Functional Shellable in the FunctionalSet_ShellableImports
7.	Retrieving Modifiers of a Functional Specification
8.	Saving the Final Part with Functional Imports
9.	Deleting and Exiting the session

We will now comment each of those sections by looking the code.

### Prolog 
CAAFmoImportFunctionalSpecsMain begins by checking that the command lines contains four arguments. It then opens a session.
Retrieving the part with Input Data
```cpp

  CATDocument * pInitialDoc = NULL;
  char * nomInitialPart = iArgv[1];
  CATDocumentServices::OpenDocument (nomInitialPart, pInitialDoc);

  CATInit_var hInitOnInitialDoc (pInitialDoc);
  if (NULL_var == hInitOnInitialDoc)
  {
    return 2; 
  }  

```
The part with input data is retrieved whose path is given by the first argument passed when launching CAAFmoImportFunctionalSpecsMain and the part is initialized to the smart pointer to the CATInit interface named hInitOnInitialDoc.	

### Retrieving the Basic Feature Structure to add the Functional Import. 
```cpp
  CATDocument * pFinalDoc = NULL;
  char * nomFinalPart = iArgv[2];
  CATDocumentServices::OpenDocument (nomFinalPart, pFinalDoc);

  CATInit_var hInitOnFinalDoc (pFinalDoc);
  if (NULL_var == hInitOnFinalDoc)
  {
    return 2; 
  }

  CATIPrtContainer * piPrtCont = (CATIPrtContainer*) hInitOnInitialDoc -> GetRootContainer ("CATIPrtContainer");	
  CATISpecObject_var hInitialMechPart;
  if (piPrtCont)
  {
    // retrieves the MechanicalPart
    hInitialMechPart = piPrtCont -> GetPart();

    piPrtCont -> Release();
    piPrtCont = NULL;
  }
  if (NULL_var == hInitialMechPart)
  {
    return 3;
  }

  CATISpecObject_var hFinalMechPart;
  piPrtCont = (CATIPrtContainer*) hInitOnFinalDoc -> GetRootContainer ("CATIPrtContainer");	
  if (piPrtCont)
  {
    // retrieves the MechanicalPart
    hFinalMechPart = piPrtCont -> GetPart();

    piPrtCont -> Release();
    piPrtCont = NULL;
  }
  if (NULL_var == hFinalMechPart)
  {
    return 3;
  }

  // Retrieves the Main Functional Set
  CATIFmoBody * piFmoBody = NULL;
  CATIFmoFunctionalSet * piFmoInitialFunctionalSet = NULL;
  if (SUCCEEDED (hInitialMechPart -> QueryInterface (IID_CATIFmoBody, (void**) &piFmoBody)))
  {
    CATBoolean iForceCreation = FALSE,
               oIsCreated     = FALSE;

    // Retrieves the existing Main Functional Set
    piFmoBody -> CreateOrRetrieveMainFunctionalSet (&piFmoInitialFunctionalSet, iForceCreation, oIsCreated);

    piFmoBody -> Release();
    piFmoBody = NULL;

    if (oIsCreated)
    {
      return 4;
    }
  }
  if (NULL == piFmoInitialFunctionalSet)
  {
    return 4;
  }

  CATIFmoFunctionalSet * piFmoFinalFunctionalSet = NULL;
  if (SUCCEEDED (hFinalMechPart -> QueryInterface (IID_CATIFmoBody, (void**) &piFmoBody)))
  {
    CATBoolean iForceCreation = FALSE,
               oIsCreated     = FALSE;

    // Retrieves the existing Main Functional Set
    piFmoBody -> CreateOrRetrieveMainFunctionalSet (&piFmoFinalFunctionalSet, iForceCreation, oIsCreated);

    piFmoBody -> Release();
    piFmoBody = NULL;

    if (oIsCreated)
    {
      return 4;
    }
  }
  if (NULL == piFmoFinalFunctionalSet)
  {
    return 4;
  }
```

The part with basic feature structure is retrieved whose path is given by the second argument passed when launching CAAFmoImportFunctionalSpecsMain. The part is initialized to the smart pointer to the CATInit interface named hInitOnFinalDoc. 
Then after, the initial part s document's root container is retrieved thanks to the GetRootContainer method as a CATIPrtContainer interface pointer. The root container is used to retrieve the mechanical part. Similarly, the final part s document s root container is retrieved, which is used to retrieve its mechanical part. 
Once the mechanical parts are retrieved, we query for CATIFmoBody Interface, which is used to create or retrieve the main functional set. We get the main functional set in initial and final part. 

### Retrieving Four Functional Sets with Convenient names in Initial Part
```cpp
      
CATIFmoFunctionalSet * piShellableFunctionalSet = NULL,
                       * piInternalFunctionalSet  = NULL,
                       * piExternalFunctionalSet  = NULL,
                       * piProtectedFunctionalSet = NULL;
 
  CATIListOfCATIFmoFunctionalSet * pListFunctionalSet = NULL;
  piFmoInitialFunctionalSet -> GetDirectFunctionalSet (&pListFunctionalSet);
  if (pListFunctionalSet)
  {
    unsigned int Size = 0;
    if (SUCCEEDED (pListFunctionalSet -> Count (&Size)))
    {
      for (unsigned int i = 0; i < Size; i++) 
      {
        CATIFmoFunctionalSet * pFunctionalSet = NULL;
        if (SUCCEEDED (pListFunctionalSet -> Item (i, &pFunctionalSet)) && pFunctionalSet)
        {
          CATIAlias * piFunSetAlias = NULL;
          if (SUCCEEDED (pFunctionalSet -> QueryInterface (IID_CATIAlias, (void**) &piFunSetAlias)))
          {
             CATUnicodeString name = piFunSetAlias -> GetAlias ();
             if (name == "Functional Set_Shellable")
             {
               piShellableFunctionalSet = pFunctionalSet;
               if (piShellableFunctionalSet)
               {
                 piShellableFunctionalSet -> AddRef();
               }
             }
             else if (name == "Functional Set_Internal")
             {
               piInternalFunctionalSet = pFunctionalSet;
               if (piInternalFunctionalSet)
               {
                 piInternalFunctionalSet -> AddRef();
               }
             }
             else if (name == "Functional Set_External")
             {
               piExternalFunctionalSet = pFunctionalSet;
               if (piExternalFunctionalSet)
               {
                 piExternalFunctionalSet -> AddRef();
               }
            }
             else if (name == "Functional Set_Protected")
             {
               piProtectedFunctionalSet = pFunctionalSet;
               if (piProtectedFunctionalSet)
               {
                 piProtectedFunctionalSet -> AddRef();
               }
            }

             piFunSetAlias -> Release();
             piFunSetAlias = NULL;
          }

          pFunctionalSet -> Release(); 
          pFunctionalSet = NULL;
        }
      }
    }

    pListFunctionalSet -> Release();
    pListFunctionalSet = NULL;
  }
  else
  {
    return 5;
  }
  if (NULL == piShellableFunctionalSet || NULL == piInternalFunctionalSet || NULL == piExternalFunctionalSet || NULL == piProtectedFunctionalSet)
  {
    return 5;
  }
```
After retrieving the main functional set in initial part, we retrieve its direct children functional sets, thanks to the GetDirectFunctionalSet method of CATIFmoFunctionalSet interface. We then query for the CATIAlias Interface and check the functional sets by their names.  

### Retrieving Four Functional Sets with Convenient names in Final Part
```cpp

CATIFmoFunctionalSet * piShellableFunctionalSetImport = NULL,
                       * piInternalFunctionalSetImport  = NULL,
                       * piExternalFunctionalSetImport  = NULL,
                       * piProtectedFunctionalSetImport = NULL;

  piFmoFinalFunctionalSet -> GetDirectFunctionalSet (&pListFunctionalSet);
  if (pListFunctionalSet)
  {
    unsigned int Size = 0;
    if (SUCCEEDED (pListFunctionalSet -> Count (&Size)))
    {
      for (unsigned int i = 0; i < Size; i++) 
      {
        CATIFmoFunctionalSet * pFunctionalSet = NULL;
        if (SUCCEEDED (pListFunctionalSet -> Item (i, &pFunctionalSet)) && pFunctionalSet)
        {
          CATIAlias * piFunSetAlias = NULL;
          if (SUCCEEDED (pFunctionalSet -> QueryInterface (IID_CATIAlias, (void**) &piFunSetAlias)))
          {
             CATUnicodeString name = piFunSetAlias -> GetAlias ();
             if (name == "FunctionalSet_ShellableImports")
             {
               piShellableFunctionalSetImport = pFunctionalSet;
               if (piShellableFunctionalSetImport)
               {
                 piShellableFunctionalSetImport -> AddRef();
               }
             }
             else if (name == "FunctionalSet_InternalImports")
             {
               piInternalFunctionalSetImport = pFunctionalSet;
               if (piInternalFunctionalSetImport)
               {
                 piInternalFunctionalSetImport -> AddRef();
               }
             }
             else if (name == "FunctionalSet_ExternalImports")
             {
               piExternalFunctionalSetImport = pFunctionalSet;
               if (piExternalFunctionalSetImport)
               {
                 piExternalFunctionalSetImport -> AddRef();
               }
            }
             else if (name == "FunctionalSet_ProtectedImports")
             {
               piProtectedFunctionalSetImport = pFunctionalSet;
               if (piProtectedFunctionalSetImport)
               {
                 piProtectedFunctionalSetImport -> AddRef();
               }
            }

             piFunSetAlias -> Release();
             piFunSetAlias = NULL;
          }

          pFunctionalSet -> Release(); 
          pFunctionalSet = NULL;
        }
      }
    }

    pListFunctionalSet -> Release();
    pListFunctionalSet = NULL;
  }
  else
  {
    return 5;
  }

  if (NULL == piShellableFunctionalSetImport || NULL == piInternalFunctionalSetImport || NULL == piExternalFunctionalSetImport || NULL == piProtectedFunctionalSetImport)
  {
    return 5;
  }
```

After retrieving the main functional set in Final part, we retrieve its direct children functional sets, thanks to the GetDirectFunctionalSet method of CATIFmoFunctionalSet interface. We then query for the CATIAlias Interface and check the functional sets by their names.  

### Importing each Functional Shellable in the FunctionalSet_ShellableImports
```cpp
CATIListOfCATIFmoFunctionalSpecification * pListFunctionalSpec = NULL;
 
  piShellableFunctionalSet -> GetDirectFunctionalSpec (&pListFunctionalSpec);
  if (pListFunctionalSpec)
  {
    unsigned int Size = 0;
    if (SUCCEEDED (pListFunctionalSpec -> Count (&Size)))
    {
      CATIBuildPath * piTargetPathAccess = NULL;
      if (SUCCEEDED (piShellableFunctionalSetImport -> QueryInterface (IID_CATIBuildPath, (void**) &piTargetPathAccess)))
      {
        CATPathElement * pTargetPath = NULL;
        CATPathElement * pTargetContext = new CATPathElement();
        if (pTargetContext)
        {
          pTargetContext -> AddChildElement (hFinalMechPart);
          piTargetPathAccess -> ExtractPathElement (pTargetContext, &pTargetPath);

          pTargetContext -> Release();
          pTargetContext = NULL;
        }
        if (pTargetPath)
        {
          CATIFmoImportFactory * piFmoImportFactory = NULL;
          if (SUCCEEDED (piShellableFunctionalSetImport -> QueryInterface (IID_CATIFmoImportFactory, (void**) &piFmoImportFactory)))
          {
            for (unsigned int i = 0; i < Size; i++) 
            {
              CATIFmoFunctionalSpecification * pFunctionalSpec = NULL;
              if (SUCCEEDED (pListFunctionalSpec -> Item (i, &pFunctionalSpec)) && pFunctionalSpec)
              {
                CATIBuildPath * piInputPathAccess = NULL;
                if (SUCCEEDED (piShellableFunctionalSet -> QueryInterface (IID_CATIBuildPath, (void**) &piInputPathAccess)))
                {
                  CATPathElement * pInputPath = NULL;
                  CATPathElement * pInputContext = new CATPathElement();
                  if (pInputContext)
                  {
                    pInputContext -> AddChildElement (hInitialMechPart);
                    piInputPathAccess -> ExtractPathElement (pInputContext, &pInputPath);

                    pInputContext -> Release();
                    pInputContext = NULL;
                  }
                  if (pInputPath)
                  {
                    pInputPath -> AddChildElement (pFunctionalSpec);

                    CATIFmoFunctionalSpecification * pFunctionalImport = NULL;
                    piFmoImportFactory -> CreateFunctionalImport (pInputPath, pTargetPath, &pFunctionalImport);
                    if (pFunctionalImport)
                    {
                      pFunctionalImport -> Release();
                      pFunctionalImport = NULL;
                    }
                    else
                    {
                      return 6;
                    }

                    pInputPath -> Release();
                    pInputPath = NULL;
                  }

                  piInputPathAccess -> Release();
                  piInputPathAccess = NULL;
                }

                pFunctionalSpec -> Release(); 
                pFunctionalSpec = NULL;
              }
            }

            piFmoImportFactory -> Release(); 
            piFmoImportFactory = NULL;
          }

          pTargetPath -> Release();
          pTargetPath = NULL;
        }

        piTargetPathAccess -> Release(); 
        piTargetPathAccess = NULL;
      }
    }

    pListFunctionalSpec -> Release();
    pListFunctionalSpec = NULL;
  }
  else
  {
    return 6;
  }
```

After retrieving the Shellable functional set in Final part, we retrieve its list of direct children functional specification, thanks to the GetDirectFunctionalSpec method of CATIFmoFunctionalSet interface. We then query on the shellable functional set of Initial part for the CATIBuildPath Interface which is used to build a CATPathElement from an object. 
We create a new object of CATPathElement and add the final mechanical part to it using the method AddChildElement  and then extract its path using the ExtractPathElement method. Similarly we extract the input path of the initial mechanical part. 
We then query for CATIFmoImportFactory interface which is used to create or retrieve the main functional set from the input and the target path extracted. 

### Retrieving Modifiers of a Functional Specification 
```cpp
CATIListOfCATIFmoFunctionalSpecification * pListFunctionalProtected = NULL;
 
  piProtectedFunctionalSet -> GetDirectFunctionalSpec (&pListFunctionalProtected);
  if (pListFunctionalProtected)
  {
    unsigned int Size = 0;
    if (SUCCEEDED (pListFunctionalProtected -> Count (&Size)))
    {
      for (unsigned int i = 0; i < Size; i++) 
      {
        CATIFmoFunctionalSpecification * pFunctionalSpec = NULL;
        if (SUCCEEDED (pListFunctionalProtected -> Item (i, &pFunctionalSpec)) && pFunctionalSpec)
        {
          CATIListOfCATIFmoFunctionalSpecification * pListFunctionalModifier = NULL;
          if (SUCCEEDED (pFunctionalSpec -> GetLocalModifiers (&pListFunctionalModifier)))
          {
            if (pListFunctionalModifier)
            {
              pListFunctionalModifier -> Release();
              pListFunctionalModifier = NULL;
            }
          }
          else
          {
            return 7;
          }

          CATIListOfCATIFmoFunctionalSpecification * pListFunctionalModified = NULL;
          if (SUCCEEDED (pFunctionalSpec -> GetModifiedFeatures (&pListFunctionalModified)))
          {
            if (pListFunctionalModified)
            {
              pListFunctionalModified -> Release();
              pListFunctionalModified = NULL;
            }
          }
          else
          {
            return 7;
          }

          pFunctionalSpec -> Release(); 
          pFunctionalSpec = NULL;
        }
      }
    }
 
    pListFunctionalProtected -> Release();
    pListFunctionalProtected = NULL;
  }

  // Clean
  if (piShellableFunctionalSet)
  {
    piShellableFunctionalSet -> Release();
    piShellableFunctionalSet = NULL;
  }
  if (piInternalFunctionalSet)
  {
    piInternalFunctionalSet -> Release();
    piInternalFunctionalSet = NULL;
  }
  if (piExternalFunctionalSet)
  {
    piExternalFunctionalSet -> Release();
    piExternalFunctionalSet = NULL;
  }
  if (piProtectedFunctionalSet)
  {
    piProtectedFunctionalSet -> Release();
    piProtectedFunctionalSet = NULL;
  }
  if (piShellableFunctionalSetImport)
  {
    piShellableFunctionalSetImport -> Release();
    piShellableFunctionalSetImport = NULL;
  }
  if (piInternalFunctionalSetImport)
  {
    piInternalFunctionalSetImport -> Release();
    piInternalFunctionalSetImport = NULL;
  }
  if (piExternalFunctionalSetImport)
  {
    piExternalFunctionalSetImport -> Release();
    piExternalFunctionalSetImport = NULL;
  }
  if (piProtectedFunctionalSetImport)
  {
    piProtectedFunctionalSetImport -> Release();
    piProtectedFunctionalSetImport = NULL;
  }
```
After importing the functional shellable in FunctionalSet_ShellableImport, retrieve the local modifiers of functional specification using the method GetLocalModifiers and get the list of modified features using the method GetModifiedFeatures. 

### Saving the final part with Functional Import
```cpp

HRESULT oRc = E_FAIL;
  char * nomPart = iArgv[3];
  oRc = CATDocumentServices::SaveAs (*pFinalDoc, nomPart);
  if (!SUCCEEDED (oRc))
  {
    return 8;
  }

```

Saving the final part with functional import at a path given by the third argument passed when launching CAAFmoImportFunctionalSpecsMain

### Deleting and Exiting Session
```cpp

  // Closes the documents
  oRc = CATDocumentServices::Remove (*pInitialDoc);
  if (!SUCCEEDED (oRc))
  {
    return 9;
  }
  oRc = CATDocumentServices::Remove (*pFinalDoc);
  if (!SUCCEEDED (oRc))
  {
    return 9;
  }
 
  // Closes the session   
  oRc = ::Delete_Session ("SampleSession"); 
  if (!SUCCEEDED (oRc))
  {
    rc = 10;
  }
  else
  {
    rc = 0;
  }
```

Deleting the session after the test is completed.

## In Short
This use case has demonstrated the way to import functional specifications from a CATPart to a Basic Feature Structure.

## History
Version: 1 [Jan 2018]	Document created
