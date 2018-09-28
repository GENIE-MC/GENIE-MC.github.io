
     <div CLASS="clsInsidePageHeader"> G16_01a </div>

     <br>
     <p>  This is the update of G00_00a using the new Event generator for CC QE. 
       The new generator is now the default, and it does not have to be configured. 
     </p> 

     <p>
       New algorithms have also been included, like single Kaon production and diffractive pion production. 
     </p> 
      <br> 

     <div id="InsidePageSectionHeader"> 
         Configuration Table
     </div>
     
     <table border="1" cellpadding="1" cellspacing="2">
       <tr CLASS="clsConfigureTableBody"> 
               <td> ALGORITHM             </td>
               <td> MODEL                 </td>             
               <td> CONFIGURATION         </td>
               <td> COMMENTS   </td>  
           </tr>  
           <tr CLASS="clsConfigureTableBody"> 
               <td> <b> Initial Nucleus State </b> </td>
               <td> Relativistic Fermi Gas <br>
                    Bodek Ritchie for high energy tail
               </td><td> <pre> FGMBodekRitche/Default </pre> 
               </td><td>  </td>
           </tr>  
        
           <tr CLASS="clsConfigureTableBody"> 
               <td> <b> CC QE </b> </td>
               <td> Llewellyn Smith
               </td><td> <pre> LwlynSmithQELCCPXSec/Default </pre> 
               </td><td>  BBA05 elastic nucleon FF  <br>
                     Dipole Axial Form Factor,
                       M<sub>A</sub> = 0.99 GeV/c<small><sup>2</sup></small> <br>
                     New CCQE Event Generator
               </td>
           </tr>  
           <tr CLASS="clsConfigureTableBody"> 
               <td> <b> CC 2p/2h </b> </td>
               <td> None </td>
               <td>  </td>  <td>  </td> 
               
           </tr>  
           <tr CLASS="clsConfigureTableBody"> 
               <td> <b> CC RES </b> 
               </td><td> Rein Sehgal 
               </td><td> <pre> ReinSehgalRESPXSec/Default </pre></small> 
               </td><td> dipole axial FF, 
                           M<sub>A</sub> = 1.12 GeV/c<small><sup>2</sup></small>  <br>
                         16 Resonances - No interference

               </td>
           </tr>  
           <tr CLASS="clsConfigureTableBody"> 
               <td> <b> CC DIS </b> 
               </td><td> E.A.Paschos and J.Y.Yu <br>
                         <A href="https://arxiv.org/ct?url=http%3A%2F%2Fdx.doi.org%2F10%252E1103%2FPhysRevD%252E65%252E033002&v=23158723" > Phys. Rev. D65 (2002) </A>
               </td><td> <pre> QPMDISPXSec/Default </pre>
               </td><td> Scaling factor = 1.032
               </td>
           </tr>  
           <tr CLASS="clsConfigureTableBody"> 
               <td> <b> CC COH Pion </b> 
               </td><td> Rein Sehgal <br>
                         Updated PCAC formula
               </td><td> <pre> ReinSehgalCOHPiPXSec/Default </pre> 
               </td><td>  
               </td>
           </tr> 
           <tr CLASS="clsConfigureTableBody"> 
               <td> <b> CC Diffractive Pion </b> 
               </td><td> D. Rein <br> 
                         <A href="http://dx.doi.org/10.1016/0550-3213(86)90106-9"> Nucl. Phys. B278 (1986) 61-77 </A> 
               </td><td> <pre> ReinDFRPXSec/Default </pre> 
               </td><td> 
               </td>
               
           </tr> 
           <tr CLASS="clsConfigureTableBody"> 
               <td> <b> CC &Delta;S = 1 QE </b> 
               </td><td> A. Pais <br> 
                         <A href="http://dx.doi.org/10.1016/0003-4916(71)90018-2"> Annals Phys. 63 (1971) 361-392 </A>
               </td><td> <pre> PaisQELLambdaPXSec/Default </pre>
               </td><td> Implemented equation 2.34 of the Pais' paper, but ignoring lepton mass terms.
               </td>
           </tr> 
           <tr CLASS="clsConfigureTableBody"> 
               <td> <b> CC &Delta;S = 1 Inelastic </b> 
               </td><td> M. Rafi Alam <i>et al.</i> <br> 
                         <A href="http://dx.doi.org/10.1103/PhysRevD.82.033001"> Phys. Rev. D82 (2010) 033001 </A>
               </td><td> <pre> AlamSimoAtharVacasSKPXSec2014/Default </pre>
               </td><td> 
               </td>
           </tr> 
           <tr CLASS="clsConfigureTableBody"> 
               <td> <b> CC &Delta;C = 1 QE </b> 
               </td><td> Kovalenko
               </td><td> <pre> KovalenkoQELCharmPXSec/Default </pre>
               </td><td> 
               </td>
           </tr> 
           <tr CLASS="clsConfigureTableBody"> 
               <td> <b> CC &Delta;C = 1 Inelastic </b> 
               </td><td> Aivazis-Olness-Tung DIS charm production model
               </td><td> <pre> AivazisCharmPXSecLO/CC-Default </pre>
               </td><td> 
               </td>
           </tr> 
           <tr CLASS="clsConfigureTableBody"> 
               <td> <b> NC Elastic </b> </td>
               <td> Ahrens model
               </td><td> <pre> AhrensNCELPXSec/Default </pre> 
               </td><td>  BBA05 elastic nucleon FF  <br>
                     Dipole Axial Form Factor,  
                       M<sub>A</sub> = 0.99 GeV/c<small><sup>2</sup></small> <br>
		     strange axial Form Factor contribution &eta;=0.12
               </td>
           </tr>  
           <tr CLASS="clsConfigureTableBody"> 
               <td> <b> NC 2p/2h </b> </td>
               <td> None 
	       </td>  <td>  
	       </td>  <td>  
	       </td> 
               
           </tr>  
           <tr CLASS="clsConfigureTableBody"> 
               <td> <b> NC RES </b> 
               </td><td> Rein Sehgal 
               </td><td> <pre> ReinSehgalRESPXSec/Default </pre></small> 
               </td><td> dipole axial FF, 
                           M<sub>A</sub> = 0.84 GeV/c<small><sup>2</sup></small>  <br>
                         16 Resonances - No interference

               </td>
           </tr>  
           <tr CLASS="clsConfigureTableBody"> 
               <td> <b> NC DIS </b> 
               </td><td> E.A.Paschos and J.Y.Yu <br>
                         <A href="https://arxiv.org/ct?url=http%3A%2F%2Fdx.doi.org%2F10%252E1103%2FPhysRevD%252E65%252E033002&v=23158723" > Phys. Rev. D65 (2002) </A>
               </td><td> <pre> QPMDISPXSec/Default </pre>
               </td><td> Scaling factor = 1.032
               </td>
           </tr>  
           <tr CLASS="clsConfigureTableBody"> 
               <td> <b> NC COH Pion </b> 
               </td><td> Rein Sehgal <br>
                         Updated PCAC formula
               </td><td> <pre> ReinSehgalCOHPiPXSec/Default </pre> 
               </td><td>  
               </td>
           </tr> 
           <tr CLASS="clsConfigureTableBody"> 
               <td> <b> NC Diffractive Pion </b> 
               </td><td> D. Rein <br>
                           <A href="http://dx.doi.org/10.1016/0550-3213(86)90106-9"> Nucl. Phys. B278 (1986) 61-77 </A> 
               </td><td> <pre> ReinDFRPXSec/Default </pre> 
               </td><td> 
               </td>
               
           </tr> 
           <tr CLASS="clsConfigureTableBody"> 
               <td> <b> RES/DIS Transition Region Modeling </b> 
               </td><td> Resonances for W &lt; 1.7 GeV <br>
                         Non-Resonance Background from BY extrapolation with NeuGen tuning
               </td><td> 
               </td><td> 
               </td>
           </tr> 
           <tr CLASS="clsConfigureTableBody"> 
               <td> <b> Resonance decay </b> 
               </td><td> Phase Space
               </td><td> 
               </td><td> 
               </td>
           </tr> 
           <tr CLASS="clsConfigureTableBody"> 
               <td> <b> Hadronization </b> 
               </td><td> AGKY
               </td><td> 
               </td><td> 
               </td>
           </tr> 
           <tr CLASS="clsConfigureTableBody"> 
               <td> <b> Final State Interactions </b> 
               </td><td> Intranuke hA 
               </td><td> <pre> HAIntranuke/Default </pre>
               </td><td> 
               </td>
           </tr> 

        </table>
	
     <div id="InsidePageSectionHeader"> 
         Validation
     </div>

     <div id="InsidePageSectionHeader"> 
         Tunings
     </div>






