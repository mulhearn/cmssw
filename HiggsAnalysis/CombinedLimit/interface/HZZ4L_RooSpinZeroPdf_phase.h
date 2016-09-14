/*****************************************************************************
 * Project: RooFit                                                           *
 *                                                                           *
  * This code was autogenerated by RooClassFactory                            * 
 *****************************************************************************/

#ifndef HZZ4L_ROOSPINZEROPDF_PHASE
#define HZZ4L_ROOSPINZEROPDF_PHASE

#include "RooAbsPdf.h"
#include "RooRealProxy.h"
#include "RooRealVar.h"
#include "RooCategoryProxy.h"
#include "RooAbsReal.h"
#include "RooAbsCategory.h"
#include "TH3F.h"
#include "TH1.h"
#include "RooDataHist.h"
#include "RooHistFunc.h"
using namespace RooFit;
class HZZ4L_RooSpinZeroPdf_phase : public RooAbsPdf {
protected:

  RooRealProxy kd ;
  RooRealProxy kdint ;
  RooRealProxy ksmd ;
  RooRealProxy fai ;
  RooRealProxy phi ;
  RooListProxy _coefList ;  //  List of funcficients
//  TIterator* _coefIter ;    //! Iterator over funcficient lis
  Double_t evaluate() const ;
public:
  HZZ4L_RooSpinZeroPdf_phase() {} ; 
  HZZ4L_RooSpinZeroPdf_phase(const char *name, const char *title,
		       RooAbsReal& _kd,
		       RooAbsReal& _kdint,
					 RooAbsReal& _ksmd,
		       RooAbsReal& _fai,
		       RooAbsReal& _phi,
			const RooArgList& inCoefList);
		    
  HZZ4L_RooSpinZeroPdf_phase(const HZZ4L_RooSpinZeroPdf_phase& other, const char* name=0) ;
  virtual TObject* clone(const char* newname) const { return new HZZ4L_RooSpinZeroPdf_phase(*this,newname); }
  inline virtual ~HZZ4L_RooSpinZeroPdf_phase() {}
  
  Int_t getAnalyticalIntegral(RooArgSet& allVars, RooArgSet& analVars, const char* rangeName=0) const ;
  Double_t analyticalIntegral(Int_t code, const char* rangeName=0) const ;
  const RooArgList& coefList() const { return _coefList ; }

private:

  ClassDef(HZZ4L_RooSpinZeroPdf_phase,1) // Your description goes here...
};
 
#endif
