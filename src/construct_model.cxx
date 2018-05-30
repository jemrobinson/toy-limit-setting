#include <string>
#include <vector>
#include <iostream>
#include "RooWorkspace.h"

int main(int argc, char** argv)
{
    // Build workspace
    RooWorkspace w("workspace");

    // Define variable of interest
    w.factory("mass[125,105,160]");

    // Add background component
    w.factory("bkg_slope[-0.031,-100,0]");
    w.factory("Exponential::bkg_pdf(mass,bkg_slope)");


//     RooRealVar x("x", "x", -10, 10);
// RooRealVar mu("mu", "average", 0, -1, 1);
// RooRealVar sigma("sigma", "sigma", 1, 0, 5);
// RooGaussian gauss("gauss","gaussian PDF", x, mu, sigma);
// RooRealVar lambda("lambda", "slope", -0.1, -5., 0.);
// Define a Gaussian and an Exponential PDF according to the above parameters:
// RooGaussian gauss("gauss","gaussian PDF", x, mu, sigma);
// RooExponential expo("expo", "exponential PDF", x, lambda);

//     // --- Observable ---
// RooRealVar myy("mes","m_{ES} (GeV)",5.20,5.30) ;

// // --- Parameters ---
// RooRealVar sigmean("sigmean","B^{#pm} mass",5.28,5.20,5.30) ;
// RooRealVar sigwidth("sigwidth","B^{#pm} width",0.0027,0.001,1.) ;

// // --- Build Gaussian PDF ---
// RooGaussian signal("signal","signal PDF",mes,sigmean,sigwidth) ;




//   // Determine whether to use toys and/or Asimov
//   double luminosity(36);
//   std::vector<std::string> input_args(argv, argv + argc);
//   for (auto itArg = input_args.begin(); itArg != input_args.end(); ++itArg) {
//     if (*itArg == "--luminosity" && (itArg + 1) != input_args.end()) { luminosity = std::stod(*(itArg + 1)); }
//     // if (*itArg == "--luminosity" && (itArg + 1) != input_args.end()) { luminosity = std::stod(*(itArg + 1)); }
//   }
//   std::cout << "Luminosity is " << luminosity << " fb-1" << std::endl;
//   double sigma_bkg = 39.722;
//   double acceptance_bkg = 0.0783221;

//   // Background is simply an exponential: norm * exp(bkg_p0 * x)
//   double bkg_p0 = -0.031;
//   double bkg_norm = 110;
//   double N_bkg = sigma_bkg * acceptance_bkg * luminosity;

// //   norm * (e (p0 * 160) - e (p0 * 105)) / p0 = N_bkg
// //   norm = N_bkg * bkg_p0 / (e (bkg_p0 * 160) - e (bkg_p0 * 105))

// // 10, 11, 9, 7, 6, 4, 3, 10, 5, 4, 5, 7, 3, 6, 3, 5, 4, 2, 3, 1, 2, 2

// // 1  Constant     5.49548e+00   9.09768e-01   1.80577e-04  -4.74285e-05
// // 2  Slope       -3.09818e-02   7.22640e-03   1.43447e-06  -2.90127e-03

//   std::cout << "N_bkg: " << N_bkg << std::endl;


  return 0;
}