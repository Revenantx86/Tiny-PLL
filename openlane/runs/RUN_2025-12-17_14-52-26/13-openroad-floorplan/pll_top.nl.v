module pll_top (lock_detect,
    pll_out,
    ref_clk,
    rst_n,
    sys_clk,
    debug_dco_word,
    div_val,
    initial_freq);
 output lock_detect;
 output pll_out;
 input ref_clk;
 input rst_n;
 input sys_clk;
 output [31:0] debug_dco_word;
 input [31:0] div_val;
 input [31:0] initial_freq;

 wire _0000_;
 wire _0001_;
 wire _0002_;
 wire _0003_;
 wire _0004_;
 wire _0005_;
 wire _0006_;
 wire _0007_;
 wire _0008_;
 wire _0009_;
 wire _0010_;
 wire _0011_;
 wire _0012_;
 wire _0013_;
 wire _0014_;
 wire _0015_;
 wire _0016_;
 wire _0017_;
 wire _0018_;
 wire _0019_;
 wire _0020_;
 wire _0021_;
 wire _0022_;
 wire _0023_;
 wire _0024_;
 wire _0025_;
 wire _0026_;
 wire _0027_;
 wire _0028_;
 wire _0029_;
 wire _0030_;
 wire _0031_;
 wire _0032_;
 wire _0033_;
 wire _0034_;
 wire _0035_;
 wire _0036_;
 wire _0037_;
 wire _0038_;
 wire _0039_;
 wire _0040_;
 wire _0041_;
 wire _0042_;
 wire _0043_;
 wire _0044_;
 wire _0045_;
 wire _0046_;
 wire _0047_;
 wire _0048_;
 wire _0049_;
 wire _0050_;
 wire _0051_;
 wire _0052_;
 wire _0053_;
 wire _0054_;
 wire _0055_;
 wire _0056_;
 wire _0057_;
 wire _0058_;
 wire _0059_;
 wire _0060_;
 wire _0061_;
 wire _0062_;
 wire _0063_;
 wire _0064_;
 wire _0065_;
 wire _0066_;
 wire _0067_;
 wire _0068_;
 wire _0069_;
 wire _0070_;
 wire _0071_;
 wire _0072_;
 wire _0073_;
 wire _0074_;
 wire _0075_;
 wire _0076_;
 wire _0077_;
 wire _0078_;
 wire _0079_;
 wire _0080_;
 wire _0081_;
 wire _0082_;
 wire _0083_;
 wire _0084_;
 wire _0085_;
 wire _0086_;
 wire _0087_;
 wire _0088_;
 wire _0089_;
 wire _0090_;
 wire _0091_;
 wire _0092_;
 wire _0093_;
 wire _0094_;
 wire _0095_;
 wire _0096_;
 wire _0097_;
 wire _0098_;
 wire _0099_;
 wire _0100_;
 wire _0101_;
 wire _0102_;
 wire _0103_;
 wire _0104_;
 wire _0105_;
 wire _0106_;
 wire _0107_;
 wire _0108_;
 wire _0109_;
 wire _0110_;
 wire _0111_;
 wire _0112_;
 wire _0113_;
 wire _0114_;
 wire _0115_;
 wire _0116_;
 wire _0117_;
 wire _0118_;
 wire _0119_;
 wire _0120_;
 wire _0121_;
 wire _0122_;
 wire _0123_;
 wire _0124_;
 wire _0125_;
 wire _0126_;
 wire _0127_;
 wire _0128_;
 wire _0129_;
 wire _0130_;
 wire _0131_;
 wire _0132_;
 wire _0133_;
 wire _0134_;
 wire _0135_;
 wire _0136_;
 wire _0137_;
 wire _0138_;
 wire _0139_;
 wire _0140_;
 wire _0141_;
 wire _0142_;
 wire _0143_;
 wire _0144_;
 wire _0145_;
 wire _0146_;
 wire _0147_;
 wire _0148_;
 wire _0149_;
 wire _0150_;
 wire _0151_;
 wire _0152_;
 wire _0153_;
 wire _0154_;
 wire _0155_;
 wire _0156_;
 wire _0157_;
 wire _0158_;
 wire _0159_;
 wire _0160_;
 wire _0161_;
 wire _0162_;
 wire _0163_;
 wire _0164_;
 wire _0165_;
 wire _0166_;
 wire _0167_;
 wire _0168_;
 wire _0169_;
 wire _0170_;
 wire _0171_;
 wire _0172_;
 wire _0173_;
 wire _0174_;
 wire _0175_;
 wire _0176_;
 wire _0177_;
 wire _0178_;
 wire _0179_;
 wire _0180_;
 wire _0181_;
 wire _0182_;
 wire _0183_;
 wire _0184_;
 wire _0185_;
 wire _0186_;
 wire _0187_;
 wire _0188_;
 wire _0189_;
 wire _0190_;
 wire _0191_;
 wire _0192_;
 wire _0193_;
 wire _0194_;
 wire _0195_;
 wire _0196_;
 wire _0197_;
 wire _0198_;
 wire _0199_;
 wire _0200_;
 wire _0201_;
 wire _0202_;
 wire _0203_;
 wire _0204_;
 wire _0205_;
 wire _0206_;
 wire _0207_;
 wire _0208_;
 wire _0209_;
 wire _0210_;
 wire _0211_;
 wire _0212_;
 wire _0213_;
 wire _0214_;
 wire _0215_;
 wire _0216_;
 wire _0217_;
 wire _0218_;
 wire _0219_;
 wire _0220_;
 wire _0221_;
 wire _0222_;
 wire _0223_;
 wire _0224_;
 wire _0225_;
 wire _0226_;
 wire _0227_;
 wire _0228_;
 wire _0229_;
 wire _0230_;
 wire _0231_;
 wire _0232_;
 wire _0233_;
 wire _0234_;
 wire _0235_;
 wire _0236_;
 wire _0237_;
 wire _0238_;
 wire _0239_;
 wire _0240_;
 wire _0241_;
 wire _0242_;
 wire _0243_;
 wire _0244_;
 wire _0245_;
 wire _0246_;
 wire _0247_;
 wire _0248_;
 wire _0249_;
 wire _0250_;
 wire _0251_;
 wire _0252_;
 wire _0253_;
 wire _0254_;
 wire _0255_;
 wire _0256_;
 wire _0257_;
 wire _0258_;
 wire _0259_;
 wire _0260_;
 wire _0261_;
 wire _0262_;
 wire _0263_;
 wire _0264_;
 wire _0265_;
 wire _0266_;
 wire _0267_;
 wire _0268_;
 wire _0269_;
 wire _0270_;
 wire _0271_;
 wire _0272_;
 wire _0273_;
 wire _0274_;
 wire _0275_;
 wire _0276_;
 wire _0277_;
 wire _0278_;
 wire _0279_;
 wire _0280_;
 wire _0281_;
 wire _0282_;
 wire _0283_;
 wire _0284_;
 wire _0285_;
 wire _0286_;
 wire _0287_;
 wire _0288_;
 wire _0289_;
 wire _0290_;
 wire _0291_;
 wire _0292_;
 wire _0293_;
 wire _0294_;
 wire _0295_;
 wire _0296_;
 wire _0297_;
 wire _0298_;
 wire _0299_;
 wire _0300_;
 wire _0301_;
 wire _0302_;
 wire _0303_;
 wire _0304_;
 wire _0305_;
 wire _0306_;
 wire _0307_;
 wire _0308_;
 wire _0309_;
 wire _0310_;
 wire _0311_;
 wire _0312_;
 wire _0313_;
 wire _0314_;
 wire _0315_;
 wire _0316_;
 wire _0317_;
 wire _0318_;
 wire _0319_;
 wire _0320_;
 wire _0321_;
 wire _0322_;
 wire _0323_;
 wire _0324_;
 wire _0325_;
 wire _0326_;
 wire _0327_;
 wire _0328_;
 wire _0329_;
 wire _0330_;
 wire _0331_;
 wire _0332_;
 wire _0333_;
 wire _0334_;
 wire _0335_;
 wire _0336_;
 wire _0337_;
 wire _0338_;
 wire _0339_;
 wire _0340_;
 wire _0341_;
 wire _0342_;
 wire _0343_;
 wire _0344_;
 wire _0345_;
 wire _0346_;
 wire _0347_;
 wire _0348_;
 wire _0349_;
 wire _0350_;
 wire _0351_;
 wire _0352_;
 wire _0353_;
 wire _0354_;
 wire _0355_;
 wire _0356_;
 wire _0357_;
 wire _0358_;
 wire _0359_;
 wire _0360_;
 wire _0361_;
 wire _0362_;
 wire _0363_;
 wire _0364_;
 wire _0365_;
 wire _0366_;
 wire _0367_;
 wire _0368_;
 wire _0369_;
 wire _0370_;
 wire _0371_;
 wire _0372_;
 wire _0373_;
 wire _0374_;
 wire _0375_;
 wire _0376_;
 wire _0377_;
 wire _0378_;
 wire _0379_;
 wire _0380_;
 wire _0381_;
 wire _0382_;
 wire _0383_;
 wire _0384_;
 wire _0385_;
 wire _0386_;
 wire _0387_;
 wire _0388_;
 wire _0389_;
 wire _0390_;
 wire _0391_;
 wire _0392_;
 wire _0393_;
 wire _0394_;
 wire _0395_;
 wire _0396_;
 wire _0397_;
 wire _0398_;
 wire _0399_;
 wire _0400_;
 wire _0401_;
 wire _0402_;
 wire _0403_;
 wire _0404_;
 wire _0405_;
 wire _0406_;
 wire _0407_;
 wire _0408_;
 wire _0409_;
 wire _0410_;
 wire _0411_;
 wire _0412_;
 wire _0413_;
 wire _0414_;
 wire _0415_;
 wire _0416_;
 wire _0417_;
 wire _0418_;
 wire _0419_;
 wire _0420_;
 wire _0421_;
 wire _0422_;
 wire _0423_;
 wire _0424_;
 wire _0425_;
 wire _0426_;
 wire _0427_;
 wire _0428_;
 wire _0429_;
 wire _0430_;
 wire _0431_;
 wire _0432_;
 wire _0433_;
 wire _0434_;
 wire _0435_;
 wire _0436_;
 wire _0437_;
 wire _0438_;
 wire _0439_;
 wire _0440_;
 wire _0441_;
 wire _0442_;
 wire _0443_;
 wire _0444_;
 wire _0445_;
 wire _0446_;
 wire _0447_;
 wire _0448_;
 wire _0449_;
 wire _0450_;
 wire _0451_;
 wire _0452_;
 wire _0453_;
 wire _0454_;
 wire _0455_;
 wire _0456_;
 wire _0457_;
 wire _0458_;
 wire _0459_;
 wire _0460_;
 wire _0461_;
 wire _0462_;
 wire _0463_;
 wire _0464_;
 wire _0465_;
 wire _0466_;
 wire _0467_;
 wire _0468_;
 wire _0469_;
 wire _0470_;
 wire _0471_;
 wire _0472_;
 wire _0473_;
 wire _0474_;
 wire _0475_;
 wire _0476_;
 wire _0477_;
 wire _0478_;
 wire _0479_;
 wire _0480_;
 wire _0481_;
 wire _0482_;
 wire _0483_;
 wire _0484_;
 wire _0485_;
 wire _0486_;
 wire _0487_;
 wire _0488_;
 wire _0489_;
 wire _0490_;
 wire _0491_;
 wire _0492_;
 wire _0493_;
 wire _0494_;
 wire _0495_;
 wire _0496_;
 wire _0497_;
 wire _0498_;
 wire _0499_;
 wire _0500_;
 wire _0501_;
 wire _0502_;
 wire _0503_;
 wire _0504_;
 wire _0505_;
 wire _0506_;
 wire _0507_;
 wire _0508_;
 wire _0509_;
 wire _0510_;
 wire _0511_;
 wire _0512_;
 wire _0513_;
 wire _0514_;
 wire _0515_;
 wire _0516_;
 wire _0517_;
 wire _0518_;
 wire _0519_;
 wire _0520_;
 wire _0521_;
 wire _0522_;
 wire _0523_;
 wire _0524_;
 wire _0525_;
 wire _0526_;
 wire _0527_;
 wire _0528_;
 wire _0529_;
 wire _0530_;
 wire _0531_;
 wire _0532_;
 wire _0533_;
 wire _0534_;
 wire _0535_;
 wire _0536_;
 wire _0537_;
 wire _0538_;
 wire _0539_;
 wire _0540_;
 wire _0541_;
 wire _0542_;
 wire _0543_;
 wire _0544_;
 wire _0545_;
 wire _0546_;
 wire _0547_;
 wire _0548_;
 wire _0549_;
 wire _0550_;
 wire _0551_;
 wire _0552_;
 wire _0553_;
 wire _0554_;
 wire _0555_;
 wire _0556_;
 wire _0557_;
 wire _0558_;
 wire _0559_;
 wire _0560_;
 wire _0561_;
 wire _0562_;
 wire _0563_;
 wire _0564_;
 wire _0565_;
 wire _0566_;
 wire _0567_;
 wire _0568_;
 wire _0569_;
 wire _0570_;
 wire _0571_;
 wire _0572_;
 wire _0573_;
 wire _0574_;
 wire _0575_;
 wire _0576_;
 wire _0577_;
 wire _0578_;
 wire _0579_;
 wire _0580_;
 wire _0581_;
 wire _0582_;
 wire _0583_;
 wire _0584_;
 wire _0585_;
 wire _0586_;
 wire _0587_;
 wire _0588_;
 wire _0589_;
 wire _0590_;
 wire _0591_;
 wire _0592_;
 wire _0593_;
 wire _0594_;
 wire _0595_;
 wire _0596_;
 wire _0597_;
 wire _0598_;
 wire _0599_;
 wire _0600_;
 wire _0601_;
 wire _0602_;
 wire _0603_;
 wire _0604_;
 wire _0605_;
 wire _0606_;
 wire _0607_;
 wire _0608_;
 wire _0609_;
 wire _0610_;
 wire _0611_;
 wire _0612_;
 wire _0613_;
 wire _0614_;
 wire _0615_;
 wire _0616_;
 wire _0617_;
 wire _0618_;
 wire _0619_;
 wire _0620_;
 wire _0621_;
 wire _0622_;
 wire _0623_;
 wire _0624_;
 wire _0625_;
 wire _0626_;
 wire _0627_;
 wire _0628_;
 wire _0629_;
 wire _0630_;
 wire _0631_;
 wire _0632_;
 wire _0633_;
 wire _0634_;
 wire _0635_;
 wire _0636_;
 wire _0637_;
 wire _0638_;
 wire _0639_;
 wire _0640_;
 wire _0641_;
 wire _0642_;
 wire _0643_;
 wire _0644_;
 wire _0645_;
 wire _0646_;
 wire _0647_;
 wire _0648_;
 wire _0649_;
 wire _0650_;
 wire _0651_;
 wire _0652_;
 wire _0653_;
 wire _0654_;
 wire _0655_;
 wire _0656_;
 wire _0657_;
 wire _0658_;
 wire _0659_;
 wire _0660_;
 wire _0661_;
 wire _0662_;
 wire _0663_;
 wire _0664_;
 wire _0665_;
 wire _0666_;
 wire _0667_;
 wire _0668_;
 wire _0669_;
 wire _0670_;
 wire _0671_;
 wire _0672_;
 wire _0673_;
 wire _0674_;
 wire _0675_;
 wire _0676_;
 wire _0677_;
 wire _0678_;
 wire _0679_;
 wire _0680_;
 wire _0681_;
 wire _0682_;
 wire _0683_;
 wire _0684_;
 wire _0685_;
 wire _0686_;
 wire _0687_;
 wire _0688_;
 wire _0689_;
 wire _0690_;
 wire _0691_;
 wire _0692_;
 wire _0693_;
 wire _0694_;
 wire _0695_;
 wire _0696_;
 wire _0697_;
 wire _0698_;
 wire _0699_;
 wire _0700_;
 wire _0701_;
 wire _0702_;
 wire _0703_;
 wire _0704_;
 wire _0705_;
 wire _0706_;
 wire _0707_;
 wire _0708_;
 wire _0709_;
 wire _0710_;
 wire _0711_;
 wire _0712_;
 wire _0713_;
 wire _0714_;
 wire _0715_;
 wire _0716_;
 wire _0717_;
 wire _0718_;
 wire _0719_;
 wire _0720_;
 wire _0721_;
 wire _0722_;
 wire _0723_;
 wire _0724_;
 wire _0725_;
 wire _0726_;
 wire _0727_;
 wire _0728_;
 wire _0729_;
 wire _0730_;
 wire _0731_;
 wire _0732_;
 wire _0733_;
 wire _0734_;
 wire _0735_;
 wire _0736_;
 wire _0737_;
 wire _0738_;
 wire _0739_;
 wire _0740_;
 wire _0741_;
 wire _0742_;
 wire _0743_;
 wire _0744_;
 wire _0745_;
 wire _0746_;
 wire _0747_;
 wire _0748_;
 wire _0749_;
 wire _0750_;
 wire _0751_;
 wire _0752_;
 wire _0753_;
 wire _0754_;
 wire _0755_;
 wire _0756_;
 wire _0757_;
 wire _0758_;
 wire _0759_;
 wire _0760_;
 wire _0761_;
 wire _0762_;
 wire _0763_;
 wire _0764_;
 wire _0765_;
 wire _0766_;
 wire _0767_;
 wire _0768_;
 wire _0769_;
 wire _0770_;
 wire _0771_;
 wire _0772_;
 wire _0773_;
 wire _0774_;
 wire _0775_;
 wire _0776_;
 wire _0777_;
 wire _0778_;
 wire _0779_;
 wire _0780_;
 wire _0781_;
 wire _0782_;
 wire _0783_;
 wire _0784_;
 wire _0785_;
 wire _0786_;
 wire _0787_;
 wire _0788_;
 wire _0789_;
 wire _0790_;
 wire _0791_;
 wire _0792_;
 wire _0793_;
 wire _0794_;
 wire _0795_;
 wire _0796_;
 wire _0797_;
 wire _0798_;
 wire _0799_;
 wire _0800_;
 wire _0801_;
 wire _0802_;
 wire _0803_;
 wire _0804_;
 wire _0805_;
 wire _0806_;
 wire _0807_;
 wire _0808_;
 wire _0809_;
 wire _0810_;
 wire _0811_;
 wire _0812_;
 wire _0813_;
 wire _0814_;
 wire _0815_;
 wire _0816_;
 wire _0817_;
 wire _0818_;
 wire _0819_;
 wire _0820_;
 wire _0821_;
 wire _0822_;
 wire _0823_;
 wire _0824_;
 wire _0825_;
 wire _0826_;
 wire _0827_;
 wire _0828_;
 wire _0829_;
 wire _0830_;
 wire _0831_;
 wire _0832_;
 wire _0833_;
 wire _0834_;
 wire _0835_;
 wire _0836_;
 wire _0837_;
 wire _0838_;
 wire _0839_;
 wire _0840_;
 wire _0841_;
 wire _0842_;
 wire _0843_;
 wire _0844_;
 wire _0845_;
 wire _0846_;
 wire _0847_;
 wire _0848_;
 wire _0849_;
 wire _0850_;
 wire _0851_;
 wire _0852_;
 wire _0853_;
 wire _0854_;
 wire _0855_;
 wire _0856_;
 wire _0857_;
 wire _0858_;
 wire _0859_;
 wire _0860_;
 wire _0861_;
 wire _0862_;
 wire _0863_;
 wire _0864_;
 wire _0865_;
 wire _0866_;
 wire _0867_;
 wire _0868_;
 wire _0869_;
 wire _0870_;
 wire _0871_;
 wire _0872_;
 wire _0873_;
 wire _0874_;
 wire _0875_;
 wire _0876_;
 wire _0877_;
 wire _0878_;
 wire _0879_;
 wire _0880_;
 wire _0881_;
 wire _0882_;
 wire _0883_;
 wire _0884_;
 wire _0885_;
 wire _0886_;
 wire _0887_;
 wire _0888_;
 wire _0889_;
 wire _0890_;
 wire _0891_;
 wire _0892_;
 wire _0893_;
 wire _0894_;
 wire _0895_;
 wire _0896_;
 wire _0897_;
 wire _0898_;
 wire _0899_;
 wire _0900_;
 wire _0901_;
 wire _0902_;
 wire _0903_;
 wire _0904_;
 wire _0905_;
 wire _0906_;
 wire _0907_;
 wire _0908_;
 wire _0909_;
 wire _0910_;
 wire _0911_;
 wire _0912_;
 wire _0913_;
 wire _0914_;
 wire _0915_;
 wire _0916_;
 wire _0917_;
 wire _0918_;
 wire _0919_;
 wire _0920_;
 wire _0921_;
 wire _0922_;
 wire _0923_;
 wire _0924_;
 wire _0925_;
 wire _0926_;
 wire _0927_;
 wire _0928_;
 wire _0929_;
 wire _0930_;
 wire _0931_;
 wire _0932_;
 wire _0933_;
 wire _0934_;
 wire _0935_;
 wire _0936_;
 wire _0937_;
 wire _0938_;
 wire _0939_;
 wire _0940_;
 wire _0941_;
 wire _0942_;
 wire _0943_;
 wire _0944_;
 wire _0945_;
 wire _0946_;
 wire _0947_;
 wire _0948_;
 wire _0949_;
 wire _0950_;
 wire _0951_;
 wire _0952_;
 wire _0953_;
 wire _0954_;
 wire _0955_;
 wire _0956_;
 wire _0957_;
 wire _0958_;
 wire _0959_;
 wire _0960_;
 wire _0961_;
 wire _0962_;
 wire _0963_;
 wire _0964_;
 wire _0965_;
 wire _0966_;
 wire _0967_;
 wire _0968_;
 wire _0969_;
 wire _0970_;
 wire _0971_;
 wire _0972_;
 wire _0973_;
 wire _0974_;
 wire _0975_;
 wire _0976_;
 wire _0977_;
 wire _0978_;
 wire _0979_;
 wire _0980_;
 wire _0981_;
 wire _0982_;
 wire _0983_;
 wire _0984_;
 wire _0985_;
 wire _0986_;
 wire _0987_;
 wire _0988_;
 wire _0989_;
 wire _0990_;
 wire _0991_;
 wire _0992_;
 wire _0993_;
 wire _0994_;
 wire _0995_;
 wire _0996_;
 wire _0997_;
 wire _0998_;
 wire _0999_;
 wire _1000_;
 wire _1001_;
 wire _1002_;
 wire _1003_;
 wire _1004_;
 wire _1005_;
 wire _1006_;
 wire _1007_;
 wire _1008_;
 wire _1009_;
 wire _1010_;
 wire _1011_;
 wire _1012_;
 wire _1013_;
 wire _1014_;
 wire _1015_;
 wire _1016_;
 wire _1017_;
 wire _1018_;
 wire _1019_;
 wire _1020_;
 wire _1021_;
 wire _1022_;
 wire _1023_;
 wire _1024_;
 wire _1025_;
 wire _1026_;
 wire _1027_;
 wire _1028_;
 wire _1029_;
 wire _1030_;
 wire \dco_inst.accumulator[0] ;
 wire \dco_inst.accumulator[10] ;
 wire \dco_inst.accumulator[11] ;
 wire \dco_inst.accumulator[12] ;
 wire \dco_inst.accumulator[13] ;
 wire \dco_inst.accumulator[14] ;
 wire \dco_inst.accumulator[15] ;
 wire \dco_inst.accumulator[16] ;
 wire \dco_inst.accumulator[17] ;
 wire \dco_inst.accumulator[18] ;
 wire \dco_inst.accumulator[19] ;
 wire \dco_inst.accumulator[1] ;
 wire \dco_inst.accumulator[20] ;
 wire \dco_inst.accumulator[21] ;
 wire \dco_inst.accumulator[22] ;
 wire \dco_inst.accumulator[23] ;
 wire \dco_inst.accumulator[24] ;
 wire \dco_inst.accumulator[25] ;
 wire \dco_inst.accumulator[26] ;
 wire \dco_inst.accumulator[27] ;
 wire \dco_inst.accumulator[28] ;
 wire \dco_inst.accumulator[29] ;
 wire \dco_inst.accumulator[2] ;
 wire \dco_inst.accumulator[30] ;
 wire \dco_inst.accumulator[3] ;
 wire \dco_inst.accumulator[4] ;
 wire \dco_inst.accumulator[5] ;
 wire \dco_inst.accumulator[6] ;
 wire \dco_inst.accumulator[7] ;
 wire \dco_inst.accumulator[8] ;
 wire \dco_inst.accumulator[9] ;
 wire \div_inst.clk_out ;
 wire \div_inst.counter[0] ;
 wire \div_inst.counter[10] ;
 wire \div_inst.counter[11] ;
 wire \div_inst.counter[12] ;
 wire \div_inst.counter[13] ;
 wire \div_inst.counter[14] ;
 wire \div_inst.counter[15] ;
 wire \div_inst.counter[16] ;
 wire \div_inst.counter[17] ;
 wire \div_inst.counter[18] ;
 wire \div_inst.counter[19] ;
 wire \div_inst.counter[1] ;
 wire \div_inst.counter[20] ;
 wire \div_inst.counter[21] ;
 wire \div_inst.counter[22] ;
 wire \div_inst.counter[23] ;
 wire \div_inst.counter[24] ;
 wire \div_inst.counter[25] ;
 wire \div_inst.counter[26] ;
 wire \div_inst.counter[27] ;
 wire \div_inst.counter[28] ;
 wire \div_inst.counter[29] ;
 wire \div_inst.counter[2] ;
 wire \div_inst.counter[30] ;
 wire \div_inst.counter[31] ;
 wire \div_inst.counter[3] ;
 wire \div_inst.counter[4] ;
 wire \div_inst.counter[5] ;
 wire \div_inst.counter[6] ;
 wire \div_inst.counter[7] ;
 wire \div_inst.counter[8] ;
 wire \div_inst.counter[9] ;
 wire \dynamic_ki[2] ;
 wire \dynamic_kp[2] ;
 wire \lf_inst.error_in[0] ;
 wire \lf_inst.error_in[1] ;
 wire \lf_inst.integrator[0] ;
 wire \lf_inst.integrator[10] ;
 wire \lf_inst.integrator[11] ;
 wire \lf_inst.integrator[12] ;
 wire \lf_inst.integrator[13] ;
 wire \lf_inst.integrator[14] ;
 wire \lf_inst.integrator[15] ;
 wire \lf_inst.integrator[16] ;
 wire \lf_inst.integrator[17] ;
 wire \lf_inst.integrator[18] ;
 wire \lf_inst.integrator[19] ;
 wire \lf_inst.integrator[1] ;
 wire \lf_inst.integrator[20] ;
 wire \lf_inst.integrator[21] ;
 wire \lf_inst.integrator[22] ;
 wire \lf_inst.integrator[23] ;
 wire \lf_inst.integrator[24] ;
 wire \lf_inst.integrator[25] ;
 wire \lf_inst.integrator[26] ;
 wire \lf_inst.integrator[27] ;
 wire \lf_inst.integrator[28] ;
 wire \lf_inst.integrator[29] ;
 wire \lf_inst.integrator[2] ;
 wire \lf_inst.integrator[30] ;
 wire \lf_inst.integrator[31] ;
 wire \lf_inst.integrator[3] ;
 wire \lf_inst.integrator[4] ;
 wire \lf_inst.integrator[5] ;
 wire \lf_inst.integrator[6] ;
 wire \lf_inst.integrator[7] ;
 wire \lf_inst.integrator[8] ;
 wire \lf_inst.integrator[9] ;
 wire \lf_inst.sample_en ;
 wire \lf_inst.zero_error_count[0] ;
 wire \lf_inst.zero_error_count[1] ;
 wire \lf_inst.zero_error_count[2] ;
 wire \lf_inst.zero_error_count[3] ;
 wire \lf_inst.zero_error_count[4] ;
 wire \pfd_inst.fb_sync[0] ;
 wire \pfd_inst.fb_sync[1] ;
 wire \pfd_inst.fb_sync[2] ;
 wire \pfd_inst.ref_sync[0] ;
 wire \pfd_inst.ref_sync[1] ;
 wire \pfd_inst.ref_sync[2] ;
 wire \pfd_inst.state[0] ;
 wire \pfd_inst.state[1] ;
 wire \pfd_inst.state[2] ;
 wire \unlock_timer[0] ;
 wire \unlock_timer[1] ;
 wire \unlock_timer[2] ;
 wire \unlock_timer[3] ;
 wire \unlock_timer[4] ;
 wire \unlock_timer[5] ;

 sky130_fd_sc_hd__inv_2 _1031_ (.A(\lf_inst.zero_error_count[3] ),
    .Y(_0451_));
 sky130_fd_sc_hd__inv_2 _1032_ (.A(\unlock_timer[5] ),
    .Y(_0452_));
 sky130_fd_sc_hd__inv_2 _1033_ (.A(rst_n),
    .Y(_0453_));
 sky130_fd_sc_hd__inv_2 _1034_ (.A(\pfd_inst.ref_sync[2] ),
    .Y(_0454_));
 sky130_fd_sc_hd__inv_2 _1035_ (.A(\pfd_inst.state[1] ),
    .Y(_0455_));
 sky130_fd_sc_hd__inv_2 _1036_ (.A(\lf_inst.integrator[8] ),
    .Y(_0456_));
 sky130_fd_sc_hd__inv_2 _1037_ (.A(\lf_inst.integrator[12] ),
    .Y(_0457_));
 sky130_fd_sc_hd__and2b_2 _1038_ (.A_N(\pfd_inst.fb_sync[2] ),
    .B(\pfd_inst.fb_sync[1] ),
    .X(_0458_));
 sky130_fd_sc_hd__inv_2 _1039_ (.A(_0458_),
    .Y(_0459_));
 sky130_fd_sc_hd__a21o_2 _1040_ (.A1(\pfd_inst.state[0] ),
    .A2(_0458_),
    .B1(\pfd_inst.state[1] ),
    .X(_0460_));
 sky130_fd_sc_hd__nand2_2 _1041_ (.A(\pfd_inst.ref_sync[1] ),
    .B(_0454_),
    .Y(_0461_));
 sky130_fd_sc_hd__and3_2 _1042_ (.A(rst_n),
    .B(_0460_),
    .C(_0461_),
    .X(_0001_));
 sky130_fd_sc_hd__a21o_2 _1043_ (.A1(\pfd_inst.state[2] ),
    .A2(_0458_),
    .B1(_0453_),
    .X(_0462_));
 sky130_fd_sc_hd__a31o_2 _1044_ (.A1(\pfd_inst.state[0] ),
    .A2(_0459_),
    .A3(_0461_),
    .B1(_0462_),
    .X(_0463_));
 sky130_fd_sc_hd__a31o_2 _1045_ (.A1(\pfd_inst.ref_sync[1] ),
    .A2(_0454_),
    .A3(_0460_),
    .B1(_0463_),
    .X(_0000_));
 sky130_fd_sc_hd__a31o_2 _1046_ (.A1(\pfd_inst.ref_sync[1] ),
    .A2(_0454_),
    .A3(\pfd_inst.state[0] ),
    .B1(\pfd_inst.state[2] ),
    .X(_0464_));
 sky130_fd_sc_hd__and3_2 _1047_ (.A(rst_n),
    .B(_0459_),
    .C(_0464_),
    .X(_0002_));
 sky130_fd_sc_hd__o21a_2 _1048_ (.A1(lock_detect),
    .A2(_0452_),
    .B1(rst_n),
    .X(_0069_));
 sky130_fd_sc_hd__inv_2 _1049_ (.A(_0069_),
    .Y(_0003_));
 sky130_fd_sc_hd__o21ai_2 _1050_ (.A1(\dco_inst.accumulator[0] ),
    .A2(\lf_inst.integrator[0] ),
    .B1(rst_n),
    .Y(_0465_));
 sky130_fd_sc_hd__a21oi_2 _1051_ (.A1(\dco_inst.accumulator[0] ),
    .A2(\lf_inst.integrator[0] ),
    .B1(_0465_),
    .Y(_0004_));
 sky130_fd_sc_hd__and2_2 _1052_ (.A(\dco_inst.accumulator[1] ),
    .B(debug_dco_word[1]),
    .X(_0466_));
 sky130_fd_sc_hd__nand2_2 _1053_ (.A(\dco_inst.accumulator[1] ),
    .B(debug_dco_word[1]),
    .Y(_0467_));
 sky130_fd_sc_hd__or2_2 _1054_ (.A(\dco_inst.accumulator[1] ),
    .B(debug_dco_word[1]),
    .X(_0468_));
 sky130_fd_sc_hd__a22o_2 _1055_ (.A1(\dco_inst.accumulator[0] ),
    .A2(\lf_inst.integrator[0] ),
    .B1(_0467_),
    .B2(_0468_),
    .X(_0469_));
 sky130_fd_sc_hd__and4_2 _1056_ (.A(\dco_inst.accumulator[0] ),
    .B(\lf_inst.integrator[0] ),
    .C(_0467_),
    .D(_0468_),
    .X(_0470_));
 sky130_fd_sc_hd__and3b_2 _1057_ (.A_N(_0470_),
    .B(rst_n),
    .C(_0469_),
    .X(_0005_));
 sky130_fd_sc_hd__nand2_2 _1058_ (.A(\dco_inst.accumulator[2] ),
    .B(debug_dco_word[2]),
    .Y(_0471_));
 sky130_fd_sc_hd__or2_2 _1059_ (.A(\dco_inst.accumulator[2] ),
    .B(debug_dco_word[2]),
    .X(_0472_));
 sky130_fd_sc_hd__a31o_2 _1060_ (.A1(\dco_inst.accumulator[0] ),
    .A2(\lf_inst.integrator[0] ),
    .A3(_0468_),
    .B1(_0466_),
    .X(_0473_));
 sky130_fd_sc_hd__a21o_2 _1061_ (.A1(_0471_),
    .A2(_0472_),
    .B1(_0473_),
    .X(_0474_));
 sky130_fd_sc_hd__and3_2 _1062_ (.A(_0471_),
    .B(_0472_),
    .C(_0473_),
    .X(_0475_));
 sky130_fd_sc_hd__and3b_2 _1063_ (.A_N(_0475_),
    .B(rst_n),
    .C(_0474_),
    .X(_0006_));
 sky130_fd_sc_hd__nand2_2 _1064_ (.A(\dco_inst.accumulator[3] ),
    .B(debug_dco_word[3]),
    .Y(_0476_));
 sky130_fd_sc_hd__or2_2 _1065_ (.A(\dco_inst.accumulator[3] ),
    .B(debug_dco_word[3]),
    .X(_0477_));
 sky130_fd_sc_hd__a21bo_2 _1066_ (.A1(_0472_),
    .A2(_0473_),
    .B1_N(_0471_),
    .X(_0478_));
 sky130_fd_sc_hd__a21o_2 _1067_ (.A1(_0476_),
    .A2(_0477_),
    .B1(_0478_),
    .X(_0479_));
 sky130_fd_sc_hd__and3_2 _1068_ (.A(_0476_),
    .B(_0477_),
    .C(_0478_),
    .X(_0480_));
 sky130_fd_sc_hd__and3b_2 _1069_ (.A_N(_0480_),
    .B(rst_n),
    .C(_0479_),
    .X(_0007_));
 sky130_fd_sc_hd__nand2_2 _1070_ (.A(\dco_inst.accumulator[4] ),
    .B(debug_dco_word[4]),
    .Y(_0481_));
 sky130_fd_sc_hd__inv_2 _1071_ (.A(_0481_),
    .Y(_0482_));
 sky130_fd_sc_hd__or2_2 _1072_ (.A(\dco_inst.accumulator[4] ),
    .B(debug_dco_word[4]),
    .X(_0483_));
 sky130_fd_sc_hd__a21bo_2 _1073_ (.A1(_0477_),
    .A2(_0478_),
    .B1_N(_0476_),
    .X(_0484_));
 sky130_fd_sc_hd__a21o_2 _1074_ (.A1(_0481_),
    .A2(_0483_),
    .B1(_0484_),
    .X(_0485_));
 sky130_fd_sc_hd__and3_2 _1075_ (.A(_0481_),
    .B(_0483_),
    .C(_0484_),
    .X(_0486_));
 sky130_fd_sc_hd__and3b_2 _1076_ (.A_N(_0486_),
    .B(rst_n),
    .C(_0485_),
    .X(_0008_));
 sky130_fd_sc_hd__or2_2 _1077_ (.A(\dco_inst.accumulator[5] ),
    .B(debug_dco_word[5]),
    .X(_0487_));
 sky130_fd_sc_hd__nand2_2 _1078_ (.A(\dco_inst.accumulator[5] ),
    .B(debug_dco_word[5]),
    .Y(_0488_));
 sky130_fd_sc_hd__and2_2 _1079_ (.A(_0487_),
    .B(_0488_),
    .X(_0489_));
 sky130_fd_sc_hd__o21ai_2 _1080_ (.A1(_0482_),
    .A2(_0486_),
    .B1(_0489_),
    .Y(_0490_));
 sky130_fd_sc_hd__o31a_2 _1081_ (.A1(_0482_),
    .A2(_0486_),
    .A3(_0489_),
    .B1(rst_n),
    .X(_0491_));
 sky130_fd_sc_hd__and2_2 _1082_ (.A(_0490_),
    .B(_0491_),
    .X(_0009_));
 sky130_fd_sc_hd__and2_2 _1083_ (.A(\dco_inst.accumulator[6] ),
    .B(debug_dco_word[6]),
    .X(_0492_));
 sky130_fd_sc_hd__or2_2 _1084_ (.A(\dco_inst.accumulator[6] ),
    .B(debug_dco_word[6]),
    .X(_0493_));
 sky130_fd_sc_hd__and2b_2 _1085_ (.A_N(_0492_),
    .B(_0493_),
    .X(_0494_));
 sky130_fd_sc_hd__a221o_2 _1086_ (.A1(\dco_inst.accumulator[5] ),
    .A2(debug_dco_word[5]),
    .B1(_0483_),
    .B2(_0484_),
    .C1(_0482_),
    .X(_0495_));
 sky130_fd_sc_hd__a21oi_2 _1087_ (.A1(_0487_),
    .A2(_0495_),
    .B1(_0494_),
    .Y(_0496_));
 sky130_fd_sc_hd__a31o_2 _1088_ (.A1(_0487_),
    .A2(_0494_),
    .A3(_0495_),
    .B1(_0453_),
    .X(_0497_));
 sky130_fd_sc_hd__nor2_2 _1089_ (.A(_0496_),
    .B(_0497_),
    .Y(_0010_));
 sky130_fd_sc_hd__nand2_2 _1090_ (.A(\dco_inst.accumulator[7] ),
    .B(debug_dco_word[7]),
    .Y(_0498_));
 sky130_fd_sc_hd__or2_2 _1091_ (.A(\dco_inst.accumulator[7] ),
    .B(debug_dco_word[7]),
    .X(_0499_));
 sky130_fd_sc_hd__and2_2 _1092_ (.A(_0498_),
    .B(_0499_),
    .X(_0500_));
 sky130_fd_sc_hd__a31o_2 _1093_ (.A1(_0487_),
    .A2(_0493_),
    .A3(_0495_),
    .B1(_0492_),
    .X(_0501_));
 sky130_fd_sc_hd__nand2_2 _1094_ (.A(_0500_),
    .B(_0501_),
    .Y(_0502_));
 sky130_fd_sc_hd__o21a_2 _1095_ (.A1(_0500_),
    .A2(_0501_),
    .B1(rst_n),
    .X(_0503_));
 sky130_fd_sc_hd__and2_2 _1096_ (.A(_0502_),
    .B(_0503_),
    .X(_0011_));
 sky130_fd_sc_hd__or2_2 _1097_ (.A(\dco_inst.accumulator[8] ),
    .B(debug_dco_word[8]),
    .X(_0504_));
 sky130_fd_sc_hd__nand2_2 _1098_ (.A(\dco_inst.accumulator[8] ),
    .B(debug_dco_word[8]),
    .Y(_0505_));
 sky130_fd_sc_hd__nand2_2 _1099_ (.A(_0504_),
    .B(_0505_),
    .Y(_0506_));
 sky130_fd_sc_hd__a21o_2 _1100_ (.A1(_0498_),
    .A2(_0502_),
    .B1(_0506_),
    .X(_0507_));
 sky130_fd_sc_hd__a31o_2 _1101_ (.A1(_0498_),
    .A2(_0502_),
    .A3(_0506_),
    .B1(_0453_),
    .X(_0508_));
 sky130_fd_sc_hd__and2b_2 _1102_ (.A_N(_0508_),
    .B(_0507_),
    .X(_0012_));
 sky130_fd_sc_hd__nor2_2 _1103_ (.A(\dco_inst.accumulator[9] ),
    .B(debug_dco_word[9]),
    .Y(_0509_));
 sky130_fd_sc_hd__or2_2 _1104_ (.A(\dco_inst.accumulator[9] ),
    .B(debug_dco_word[9]),
    .X(_0510_));
 sky130_fd_sc_hd__and2_2 _1105_ (.A(\dco_inst.accumulator[9] ),
    .B(debug_dco_word[9]),
    .X(_0511_));
 sky130_fd_sc_hd__nand2_2 _1106_ (.A(\dco_inst.accumulator[9] ),
    .B(debug_dco_word[9]),
    .Y(_0512_));
 sky130_fd_sc_hd__o211ai_2 _1107_ (.A1(_0509_),
    .A2(_0511_),
    .B1(_0505_),
    .C1(_0507_),
    .Y(_0513_));
 sky130_fd_sc_hd__a211o_2 _1108_ (.A1(_0505_),
    .A2(_0507_),
    .B1(_0509_),
    .C1(_0511_),
    .X(_0514_));
 sky130_fd_sc_hd__and3_2 _1109_ (.A(rst_n),
    .B(_0513_),
    .C(_0514_),
    .X(_0013_));
 sky130_fd_sc_hd__or2_2 _1110_ (.A(\dco_inst.accumulator[10] ),
    .B(debug_dco_word[10]),
    .X(_0515_));
 sky130_fd_sc_hd__nand2_2 _1111_ (.A(\dco_inst.accumulator[10] ),
    .B(debug_dco_word[10]),
    .Y(_0516_));
 sky130_fd_sc_hd__nand2_2 _1112_ (.A(_0515_),
    .B(_0516_),
    .Y(_0517_));
 sky130_fd_sc_hd__nand3_2 _1113_ (.A(_0505_),
    .B(_0507_),
    .C(_0512_),
    .Y(_0518_));
 sky130_fd_sc_hd__a31o_2 _1114_ (.A1(\dco_inst.accumulator[8] ),
    .A2(debug_dco_word[8]),
    .A3(_0510_),
    .B1(_0511_),
    .X(_0519_));
 sky130_fd_sc_hd__or3_2 _1115_ (.A(_0506_),
    .B(_0509_),
    .C(_0511_),
    .X(_0520_));
 sky130_fd_sc_hd__a21bo_2 _1116_ (.A1(_0510_),
    .A2(_0518_),
    .B1_N(_0517_),
    .X(_0521_));
 sky130_fd_sc_hd__or3b_2 _1117_ (.A(_0509_),
    .B(_0517_),
    .C_N(_0518_),
    .X(_0522_));
 sky130_fd_sc_hd__and3_2 _1118_ (.A(rst_n),
    .B(_0521_),
    .C(_0522_),
    .X(_0014_));
 sky130_fd_sc_hd__nor2_2 _1119_ (.A(\dco_inst.accumulator[11] ),
    .B(debug_dco_word[11]),
    .Y(_0523_));
 sky130_fd_sc_hd__nand2_2 _1120_ (.A(\dco_inst.accumulator[11] ),
    .B(debug_dco_word[11]),
    .Y(_0524_));
 sky130_fd_sc_hd__nand2b_2 _1121_ (.A_N(_0523_),
    .B(_0524_),
    .Y(_0525_));
 sky130_fd_sc_hd__a21oi_2 _1122_ (.A1(_0516_),
    .A2(_0522_),
    .B1(_0525_),
    .Y(_0526_));
 sky130_fd_sc_hd__a31o_2 _1123_ (.A1(_0516_),
    .A2(_0522_),
    .A3(_0525_),
    .B1(_0453_),
    .X(_0527_));
 sky130_fd_sc_hd__nor2_2 _1124_ (.A(_0526_),
    .B(_0527_),
    .Y(_0015_));
 sky130_fd_sc_hd__or3b_2 _1125_ (.A(_0517_),
    .B(_0525_),
    .C_N(_0519_),
    .X(_0528_));
 sky130_fd_sc_hd__o211a_2 _1126_ (.A1(_0516_),
    .A2(_0523_),
    .B1(_0524_),
    .C1(_0528_),
    .X(_0529_));
 sky130_fd_sc_hd__a2111o_2 _1127_ (.A1(_0498_),
    .A2(_0502_),
    .B1(_0517_),
    .C1(_0520_),
    .D1(_0525_),
    .X(_0530_));
 sky130_fd_sc_hd__and2_2 _1128_ (.A(_0529_),
    .B(_0530_),
    .X(_0531_));
 sky130_fd_sc_hd__nor2_2 _1129_ (.A(\dco_inst.accumulator[12] ),
    .B(debug_dco_word[12]),
    .Y(_0532_));
 sky130_fd_sc_hd__nand2_2 _1130_ (.A(\dco_inst.accumulator[12] ),
    .B(debug_dco_word[12]),
    .Y(_0533_));
 sky130_fd_sc_hd__and2b_2 _1131_ (.A_N(_0532_),
    .B(_0533_),
    .X(_0534_));
 sky130_fd_sc_hd__xor2_2 _1132_ (.A(_0531_),
    .B(_0534_),
    .X(_0535_));
 sky130_fd_sc_hd__nor2_2 _1133_ (.A(_0453_),
    .B(_0535_),
    .Y(_0016_));
 sky130_fd_sc_hd__or2_2 _1134_ (.A(\dco_inst.accumulator[13] ),
    .B(debug_dco_word[13]),
    .X(_0536_));
 sky130_fd_sc_hd__nand2_2 _1135_ (.A(\dco_inst.accumulator[13] ),
    .B(debug_dco_word[13]),
    .Y(_0537_));
 sky130_fd_sc_hd__nand2_2 _1136_ (.A(_0536_),
    .B(_0537_),
    .Y(_0538_));
 sky130_fd_sc_hd__o21a_2 _1137_ (.A1(_0531_),
    .A2(_0532_),
    .B1(_0533_),
    .X(_0539_));
 sky130_fd_sc_hd__xnor2_2 _1138_ (.A(_0538_),
    .B(_0539_),
    .Y(_0540_));
 sky130_fd_sc_hd__nor2_2 _1139_ (.A(_0453_),
    .B(_0540_),
    .Y(_0017_));
 sky130_fd_sc_hd__or2_2 _1140_ (.A(\dco_inst.accumulator[14] ),
    .B(debug_dco_word[14]),
    .X(_0541_));
 sky130_fd_sc_hd__nand2_2 _1141_ (.A(\dco_inst.accumulator[14] ),
    .B(debug_dco_word[14]),
    .Y(_0542_));
 sky130_fd_sc_hd__and3_2 _1142_ (.A(_0534_),
    .B(_0536_),
    .C(_0537_),
    .X(_0543_));
 sky130_fd_sc_hd__a21boi_2 _1143_ (.A1(_0529_),
    .A2(_0530_),
    .B1_N(_0543_),
    .Y(_0544_));
 sky130_fd_sc_hd__a21boi_2 _1144_ (.A1(_0533_),
    .A2(_0537_),
    .B1_N(_0536_),
    .Y(_0545_));
 sky130_fd_sc_hd__a211o_2 _1145_ (.A1(_0541_),
    .A2(_0542_),
    .B1(_0544_),
    .C1(_0545_),
    .X(_0546_));
 sky130_fd_sc_hd__o211ai_2 _1146_ (.A1(_0544_),
    .A2(_0545_),
    .B1(_0541_),
    .C1(_0542_),
    .Y(_0547_));
 sky130_fd_sc_hd__and3_2 _1147_ (.A(rst_n),
    .B(_0546_),
    .C(_0547_),
    .X(_0018_));
 sky130_fd_sc_hd__nor2_2 _1148_ (.A(\dco_inst.accumulator[15] ),
    .B(debug_dco_word[15]),
    .Y(_0548_));
 sky130_fd_sc_hd__and2_2 _1149_ (.A(\dco_inst.accumulator[15] ),
    .B(debug_dco_word[15]),
    .X(_0549_));
 sky130_fd_sc_hd__o211a_2 _1150_ (.A1(_0548_),
    .A2(_0549_),
    .B1(_0542_),
    .C1(_0547_),
    .X(_0550_));
 sky130_fd_sc_hd__a211oi_2 _1151_ (.A1(_0542_),
    .A2(_0547_),
    .B1(_0548_),
    .C1(_0549_),
    .Y(_0551_));
 sky130_fd_sc_hd__nor3_2 _1152_ (.A(_0453_),
    .B(_0550_),
    .C(_0551_),
    .Y(_0019_));
 sky130_fd_sc_hd__or2_2 _1153_ (.A(\dco_inst.accumulator[16] ),
    .B(debug_dco_word[16]),
    .X(_0552_));
 sky130_fd_sc_hd__nand2_2 _1154_ (.A(\dco_inst.accumulator[16] ),
    .B(debug_dco_word[16]),
    .Y(_0553_));
 sky130_fd_sc_hd__and2_2 _1155_ (.A(_0552_),
    .B(_0553_),
    .X(_0554_));
 sky130_fd_sc_hd__nor2_2 _1156_ (.A(_0542_),
    .B(_0548_),
    .Y(_0555_));
 sky130_fd_sc_hd__or3_2 _1157_ (.A(_0545_),
    .B(_0549_),
    .C(_0555_),
    .X(_0556_));
 sky130_fd_sc_hd__o21ba_2 _1158_ (.A1(_0541_),
    .A2(_0549_),
    .B1_N(_0548_),
    .X(_0557_));
 sky130_fd_sc_hd__o21a_2 _1159_ (.A1(_0544_),
    .A2(_0556_),
    .B1(_0557_),
    .X(_0558_));
 sky130_fd_sc_hd__a21oi_2 _1160_ (.A1(_0554_),
    .A2(_0558_),
    .B1(_0453_),
    .Y(_0559_));
 sky130_fd_sc_hd__o21a_2 _1161_ (.A1(_0554_),
    .A2(_0558_),
    .B1(_0559_),
    .X(_0020_));
 sky130_fd_sc_hd__nor2_2 _1162_ (.A(\dco_inst.accumulator[17] ),
    .B(debug_dco_word[17]),
    .Y(_0560_));
 sky130_fd_sc_hd__nand2_2 _1163_ (.A(\dco_inst.accumulator[17] ),
    .B(debug_dco_word[17]),
    .Y(_0561_));
 sky130_fd_sc_hd__and2b_2 _1164_ (.A_N(_0560_),
    .B(_0561_),
    .X(_0562_));
 sky130_fd_sc_hd__a21bo_2 _1165_ (.A1(_0554_),
    .A2(_0558_),
    .B1_N(_0553_),
    .X(_0563_));
 sky130_fd_sc_hd__o21ai_2 _1166_ (.A1(_0562_),
    .A2(_0563_),
    .B1(rst_n),
    .Y(_0564_));
 sky130_fd_sc_hd__a21oi_2 _1167_ (.A1(_0562_),
    .A2(_0563_),
    .B1(_0564_),
    .Y(_0021_));
 sky130_fd_sc_hd__or2_2 _1168_ (.A(\dco_inst.accumulator[18] ),
    .B(debug_dco_word[18]),
    .X(_0565_));
 sky130_fd_sc_hd__nand2_2 _1169_ (.A(\dco_inst.accumulator[18] ),
    .B(debug_dco_word[18]),
    .Y(_0566_));
 sky130_fd_sc_hd__nand2_2 _1170_ (.A(_0565_),
    .B(_0566_),
    .Y(_0567_));
 sky130_fd_sc_hd__and2_2 _1171_ (.A(_0554_),
    .B(_0562_),
    .X(_0568_));
 sky130_fd_sc_hd__a21oi_2 _1172_ (.A1(_0553_),
    .A2(_0561_),
    .B1(_0560_),
    .Y(_0569_));
 sky130_fd_sc_hd__a21oi_2 _1173_ (.A1(_0558_),
    .A2(_0568_),
    .B1(_0569_),
    .Y(_0570_));
 sky130_fd_sc_hd__or2_2 _1174_ (.A(_0567_),
    .B(_0570_),
    .X(_0571_));
 sky130_fd_sc_hd__nand2_2 _1175_ (.A(rst_n),
    .B(_0571_),
    .Y(_0572_));
 sky130_fd_sc_hd__a21oi_2 _1176_ (.A1(_0567_),
    .A2(_0570_),
    .B1(_0572_),
    .Y(_0022_));
 sky130_fd_sc_hd__nor2_2 _1177_ (.A(\dco_inst.accumulator[19] ),
    .B(debug_dco_word[19]),
    .Y(_0573_));
 sky130_fd_sc_hd__nand2_2 _1178_ (.A(\dco_inst.accumulator[19] ),
    .B(debug_dco_word[19]),
    .Y(_0574_));
 sky130_fd_sc_hd__nand2b_2 _1179_ (.A_N(_0573_),
    .B(_0574_),
    .Y(_0575_));
 sky130_fd_sc_hd__a21oi_2 _1180_ (.A1(_0566_),
    .A2(_0571_),
    .B1(_0575_),
    .Y(_0576_));
 sky130_fd_sc_hd__a31o_2 _1181_ (.A1(_0566_),
    .A2(_0571_),
    .A3(_0575_),
    .B1(_0453_),
    .X(_0577_));
 sky130_fd_sc_hd__nor2_2 _1182_ (.A(_0576_),
    .B(_0577_),
    .Y(_0023_));
 sky130_fd_sc_hd__or2_2 _1183_ (.A(\dco_inst.accumulator[20] ),
    .B(debug_dco_word[20]),
    .X(_0578_));
 sky130_fd_sc_hd__nand2_2 _1184_ (.A(\dco_inst.accumulator[20] ),
    .B(debug_dco_word[20]),
    .Y(_0579_));
 sky130_fd_sc_hd__and2_2 _1185_ (.A(_0578_),
    .B(_0579_),
    .X(_0580_));
 sky130_fd_sc_hd__nor2_2 _1186_ (.A(_0567_),
    .B(_0575_),
    .Y(_0581_));
 sky130_fd_sc_hd__nand2_2 _1187_ (.A(_0569_),
    .B(_0581_),
    .Y(_0582_));
 sky130_fd_sc_hd__o211a_2 _1188_ (.A1(_0566_),
    .A2(_0573_),
    .B1(_0574_),
    .C1(_0582_),
    .X(_0583_));
 sky130_fd_sc_hd__o2111ai_2 _1189_ (.A1(_0544_),
    .A2(_0556_),
    .B1(_0557_),
    .C1(_0568_),
    .D1(_0581_),
    .Y(_0584_));
 sky130_fd_sc_hd__nand2_2 _1190_ (.A(_0583_),
    .B(_0584_),
    .Y(_0585_));
 sky130_fd_sc_hd__or2_2 _1191_ (.A(_0580_),
    .B(_0585_),
    .X(_0586_));
 sky130_fd_sc_hd__nand2_2 _1192_ (.A(_0580_),
    .B(_0585_),
    .Y(_0587_));
 sky130_fd_sc_hd__and3_2 _1193_ (.A(rst_n),
    .B(_0586_),
    .C(_0587_),
    .X(_0024_));
 sky130_fd_sc_hd__nor2_2 _1194_ (.A(\dco_inst.accumulator[21] ),
    .B(debug_dco_word[21]),
    .Y(_0588_));
 sky130_fd_sc_hd__nand2_2 _1195_ (.A(\dco_inst.accumulator[21] ),
    .B(debug_dco_word[21]),
    .Y(_0589_));
 sky130_fd_sc_hd__and2b_2 _1196_ (.A_N(_0588_),
    .B(_0589_),
    .X(_0590_));
 sky130_fd_sc_hd__nand2_2 _1197_ (.A(_0579_),
    .B(_0587_),
    .Y(_0591_));
 sky130_fd_sc_hd__o21ai_2 _1198_ (.A1(_0590_),
    .A2(_0591_),
    .B1(rst_n),
    .Y(_0592_));
 sky130_fd_sc_hd__a21oi_2 _1199_ (.A1(_0590_),
    .A2(_0591_),
    .B1(_0592_),
    .Y(_0025_));
 sky130_fd_sc_hd__or2_2 _1200_ (.A(\dco_inst.accumulator[22] ),
    .B(debug_dco_word[22]),
    .X(_0593_));
 sky130_fd_sc_hd__nand2_2 _1201_ (.A(\dco_inst.accumulator[22] ),
    .B(debug_dco_word[22]),
    .Y(_0594_));
 sky130_fd_sc_hd__and2_2 _1202_ (.A(_0580_),
    .B(_0590_),
    .X(_0595_));
 sky130_fd_sc_hd__inv_2 _1203_ (.A(_0595_),
    .Y(_0596_));
 sky130_fd_sc_hd__and2_2 _1204_ (.A(_0585_),
    .B(_0595_),
    .X(_0597_));
 sky130_fd_sc_hd__a21oi_2 _1205_ (.A1(_0579_),
    .A2(_0589_),
    .B1(_0588_),
    .Y(_0598_));
 sky130_fd_sc_hd__a211o_2 _1206_ (.A1(_0593_),
    .A2(_0594_),
    .B1(_0597_),
    .C1(_0598_),
    .X(_0599_));
 sky130_fd_sc_hd__o211ai_2 _1207_ (.A1(_0597_),
    .A2(_0598_),
    .B1(_0593_),
    .C1(_0594_),
    .Y(_0600_));
 sky130_fd_sc_hd__and3_2 _1208_ (.A(rst_n),
    .B(_0599_),
    .C(_0600_),
    .X(_0026_));
 sky130_fd_sc_hd__or2_2 _1209_ (.A(\dco_inst.accumulator[23] ),
    .B(debug_dco_word[23]),
    .X(_0601_));
 sky130_fd_sc_hd__nand2_2 _1210_ (.A(\dco_inst.accumulator[23] ),
    .B(debug_dco_word[23]),
    .Y(_0602_));
 sky130_fd_sc_hd__nand2_2 _1211_ (.A(_0601_),
    .B(_0602_),
    .Y(_0603_));
 sky130_fd_sc_hd__nand2_2 _1212_ (.A(_0594_),
    .B(_0600_),
    .Y(_0604_));
 sky130_fd_sc_hd__a31o_2 _1213_ (.A1(_0594_),
    .A2(_0600_),
    .A3(_0603_),
    .B1(_0453_),
    .X(_0605_));
 sky130_fd_sc_hd__a31oi_2 _1214_ (.A1(_0601_),
    .A2(_0602_),
    .A3(_0604_),
    .B1(_0605_),
    .Y(_0027_));
 sky130_fd_sc_hd__or2_2 _1215_ (.A(\dco_inst.accumulator[24] ),
    .B(debug_dco_word[24]),
    .X(_0606_));
 sky130_fd_sc_hd__nand2_2 _1216_ (.A(\dco_inst.accumulator[24] ),
    .B(debug_dco_word[24]),
    .Y(_0607_));
 sky130_fd_sc_hd__and2_2 _1217_ (.A(_0606_),
    .B(_0607_),
    .X(_0608_));
 sky130_fd_sc_hd__and3_2 _1218_ (.A(\dco_inst.accumulator[22] ),
    .B(debug_dco_word[22]),
    .C(_0601_),
    .X(_0609_));
 sky130_fd_sc_hd__and4_2 _1219_ (.A(_0593_),
    .B(_0594_),
    .C(_0601_),
    .D(_0602_),
    .X(_0610_));
 sky130_fd_sc_hd__inv_2 _1220_ (.A(_0610_),
    .Y(_0611_));
 sky130_fd_sc_hd__a221oi_2 _1221_ (.A1(\dco_inst.accumulator[23] ),
    .A2(debug_dco_word[23]),
    .B1(_0598_),
    .B2(_0610_),
    .C1(_0609_),
    .Y(_0612_));
 sky130_fd_sc_hd__a211o_2 _1222_ (.A1(_0583_),
    .A2(_0584_),
    .B1(_0596_),
    .C1(_0611_),
    .X(_0613_));
 sky130_fd_sc_hd__nand2_2 _1223_ (.A(_0612_),
    .B(_0613_),
    .Y(_0614_));
 sky130_fd_sc_hd__or2_2 _1224_ (.A(_0608_),
    .B(_0614_),
    .X(_0615_));
 sky130_fd_sc_hd__nand2_2 _1225_ (.A(_0608_),
    .B(_0614_),
    .Y(_0616_));
 sky130_fd_sc_hd__and3_2 _1226_ (.A(rst_n),
    .B(_0615_),
    .C(_0616_),
    .X(_0028_));
 sky130_fd_sc_hd__or2_2 _1227_ (.A(\dco_inst.accumulator[25] ),
    .B(debug_dco_word[25]),
    .X(_0617_));
 sky130_fd_sc_hd__nand2_2 _1228_ (.A(\dco_inst.accumulator[25] ),
    .B(debug_dco_word[25]),
    .Y(_0618_));
 sky130_fd_sc_hd__nand2_2 _1229_ (.A(_0617_),
    .B(_0618_),
    .Y(_0619_));
 sky130_fd_sc_hd__a21oi_2 _1230_ (.A1(_0607_),
    .A2(_0616_),
    .B1(_0619_),
    .Y(_0620_));
 sky130_fd_sc_hd__a31o_2 _1231_ (.A1(_0607_),
    .A2(_0616_),
    .A3(_0619_),
    .B1(_0453_),
    .X(_0621_));
 sky130_fd_sc_hd__nor2_2 _1232_ (.A(_0620_),
    .B(_0621_),
    .Y(_0029_));
 sky130_fd_sc_hd__or2_2 _1233_ (.A(\dco_inst.accumulator[26] ),
    .B(debug_dco_word[26]),
    .X(_0622_));
 sky130_fd_sc_hd__nand2_2 _1234_ (.A(\dco_inst.accumulator[26] ),
    .B(debug_dco_word[26]),
    .Y(_0623_));
 sky130_fd_sc_hd__nand2_2 _1235_ (.A(_0622_),
    .B(_0623_),
    .Y(_0624_));
 sky130_fd_sc_hd__nand3_2 _1236_ (.A(_0608_),
    .B(_0617_),
    .C(_0618_),
    .Y(_0625_));
 sky130_fd_sc_hd__a21oi_2 _1237_ (.A1(_0612_),
    .A2(_0613_),
    .B1(_0625_),
    .Y(_0626_));
 sky130_fd_sc_hd__a21boi_2 _1238_ (.A1(_0607_),
    .A2(_0618_),
    .B1_N(_0617_),
    .Y(_0627_));
 sky130_fd_sc_hd__inv_2 _1239_ (.A(_0627_),
    .Y(_0628_));
 sky130_fd_sc_hd__a211o_2 _1240_ (.A1(_0622_),
    .A2(_0623_),
    .B1(_0626_),
    .C1(_0627_),
    .X(_0629_));
 sky130_fd_sc_hd__o21bai_2 _1241_ (.A1(_0626_),
    .A2(_0627_),
    .B1_N(_0624_),
    .Y(_0630_));
 sky130_fd_sc_hd__and3_2 _1242_ (.A(rst_n),
    .B(_0629_),
    .C(_0630_),
    .X(_0030_));
 sky130_fd_sc_hd__nor2_2 _1243_ (.A(\dco_inst.accumulator[27] ),
    .B(debug_dco_word[27]),
    .Y(_0631_));
 sky130_fd_sc_hd__and2_2 _1244_ (.A(\dco_inst.accumulator[27] ),
    .B(debug_dco_word[27]),
    .X(_0632_));
 sky130_fd_sc_hd__nand2_2 _1245_ (.A(\dco_inst.accumulator[27] ),
    .B(debug_dco_word[27]),
    .Y(_0633_));
 sky130_fd_sc_hd__o211ai_2 _1246_ (.A1(_0631_),
    .A2(_0632_),
    .B1(_0623_),
    .C1(_0630_),
    .Y(_0634_));
 sky130_fd_sc_hd__a211o_2 _1247_ (.A1(_0623_),
    .A2(_0630_),
    .B1(_0631_),
    .C1(_0632_),
    .X(_0635_));
 sky130_fd_sc_hd__and3_2 _1248_ (.A(rst_n),
    .B(_0634_),
    .C(_0635_),
    .X(_0031_));
 sky130_fd_sc_hd__or2_2 _1249_ (.A(\dco_inst.accumulator[28] ),
    .B(debug_dco_word[28]),
    .X(_0636_));
 sky130_fd_sc_hd__nand2_2 _1250_ (.A(\dco_inst.accumulator[28] ),
    .B(debug_dco_word[28]),
    .Y(_0637_));
 sky130_fd_sc_hd__nand2_2 _1251_ (.A(_0636_),
    .B(_0637_),
    .Y(_0638_));
 sky130_fd_sc_hd__or3_2 _1252_ (.A(_0624_),
    .B(_0631_),
    .C(_0632_),
    .X(_0639_));
 sky130_fd_sc_hd__o221a_2 _1253_ (.A1(_0623_),
    .A2(_0631_),
    .B1(_0639_),
    .B2(_0628_),
    .C1(_0633_),
    .X(_0640_));
 sky130_fd_sc_hd__a211o_2 _1254_ (.A1(_0612_),
    .A2(_0613_),
    .B1(_0625_),
    .C1(_0639_),
    .X(_0641_));
 sky130_fd_sc_hd__a21o_2 _1255_ (.A1(_0640_),
    .A2(_0641_),
    .B1(_0638_),
    .X(_0642_));
 sky130_fd_sc_hd__a31o_2 _1256_ (.A1(_0638_),
    .A2(_0640_),
    .A3(_0641_),
    .B1(_0453_),
    .X(_0643_));
 sky130_fd_sc_hd__and2b_2 _1257_ (.A_N(_0643_),
    .B(_0642_),
    .X(_0032_));
 sky130_fd_sc_hd__or2_2 _1258_ (.A(\dco_inst.accumulator[29] ),
    .B(debug_dco_word[29]),
    .X(_0644_));
 sky130_fd_sc_hd__inv_2 _1259_ (.A(_0644_),
    .Y(_0645_));
 sky130_fd_sc_hd__nand2_2 _1260_ (.A(\dco_inst.accumulator[29] ),
    .B(debug_dco_word[29]),
    .Y(_0646_));
 sky130_fd_sc_hd__nand2_2 _1261_ (.A(_0644_),
    .B(_0646_),
    .Y(_0647_));
 sky130_fd_sc_hd__a21oi_2 _1262_ (.A1(_0637_),
    .A2(_0642_),
    .B1(_0647_),
    .Y(_0648_));
 sky130_fd_sc_hd__a31o_2 _1263_ (.A1(_0637_),
    .A2(_0642_),
    .A3(_0647_),
    .B1(_0453_),
    .X(_0649_));
 sky130_fd_sc_hd__nor2_2 _1264_ (.A(_0648_),
    .B(_0649_),
    .Y(_0033_));
 sky130_fd_sc_hd__nand2_2 _1265_ (.A(\dco_inst.accumulator[30] ),
    .B(debug_dco_word[30]),
    .Y(_0650_));
 sky130_fd_sc_hd__or2_2 _1266_ (.A(\dco_inst.accumulator[30] ),
    .B(debug_dco_word[30]),
    .X(_0651_));
 sky130_fd_sc_hd__nand2_2 _1267_ (.A(_0650_),
    .B(_0651_),
    .Y(_0652_));
 sky130_fd_sc_hd__a31o_2 _1268_ (.A1(_0637_),
    .A2(_0642_),
    .A3(_0646_),
    .B1(_0645_),
    .X(_0653_));
 sky130_fd_sc_hd__a311o_2 _1269_ (.A1(_0637_),
    .A2(_0642_),
    .A3(_0646_),
    .B1(_0652_),
    .C1(_0645_),
    .X(_0654_));
 sky130_fd_sc_hd__nand2_2 _1270_ (.A(rst_n),
    .B(_0654_),
    .Y(_0655_));
 sky130_fd_sc_hd__a21oi_2 _1271_ (.A1(_0652_),
    .A2(_0653_),
    .B1(_0655_),
    .Y(_0034_));
 sky130_fd_sc_hd__xnor2_2 _1272_ (.A(pll_out),
    .B(debug_dco_word[31]),
    .Y(_0656_));
 sky130_fd_sc_hd__a21oi_2 _1273_ (.A1(_0650_),
    .A2(_0654_),
    .B1(_0656_),
    .Y(_0657_));
 sky130_fd_sc_hd__a31o_2 _1274_ (.A1(_0650_),
    .A2(_0654_),
    .A3(_0656_),
    .B1(_0453_),
    .X(_0658_));
 sky130_fd_sc_hd__nor2_2 _1275_ (.A(_0657_),
    .B(_0658_),
    .Y(_0035_));
 sky130_fd_sc_hd__or2_2 _1276_ (.A(div_val[0]),
    .B(div_val[1]),
    .X(_0659_));
 sky130_fd_sc_hd__or4_2 _1277_ (.A(div_val[0]),
    .B(div_val[1]),
    .C(div_val[3]),
    .D(div_val[2]),
    .X(_0660_));
 sky130_fd_sc_hd__nor2_2 _1278_ (.A(div_val[4]),
    .B(_0660_),
    .Y(_0661_));
 sky130_fd_sc_hd__or4_2 _1279_ (.A(div_val[5]),
    .B(div_val[4]),
    .C(div_val[6]),
    .D(_0660_),
    .X(_0662_));
 sky130_fd_sc_hd__nor2_2 _1280_ (.A(div_val[7]),
    .B(_0662_),
    .Y(_0663_));
 sky130_fd_sc_hd__or4_2 _1281_ (.A(div_val[7]),
    .B(div_val[9]),
    .C(div_val[8]),
    .D(_0662_),
    .X(_0664_));
 sky130_fd_sc_hd__or3_2 _1282_ (.A(div_val[11]),
    .B(div_val[10]),
    .C(_0664_),
    .X(_0665_));
 sky130_fd_sc_hd__or4_2 _1283_ (.A(div_val[12]),
    .B(div_val[11]),
    .C(div_val[10]),
    .D(_0664_),
    .X(_0666_));
 sky130_fd_sc_hd__or3_2 _1284_ (.A(div_val[13]),
    .B(div_val[14]),
    .C(_0666_),
    .X(_0667_));
 sky130_fd_sc_hd__or4_2 _1285_ (.A(div_val[15]),
    .B(div_val[13]),
    .C(div_val[14]),
    .D(_0666_),
    .X(_0668_));
 sky130_fd_sc_hd__or3_2 _1286_ (.A(div_val[17]),
    .B(div_val[16]),
    .C(_0668_),
    .X(_0669_));
 sky130_fd_sc_hd__or4_2 _1287_ (.A(div_val[18]),
    .B(div_val[17]),
    .C(div_val[16]),
    .D(_0668_),
    .X(_0670_));
 sky130_fd_sc_hd__or3_2 _1288_ (.A(div_val[20]),
    .B(div_val[19]),
    .C(_0670_),
    .X(_0671_));
 sky130_fd_sc_hd__or4_2 _1289_ (.A(div_val[21]),
    .B(div_val[20]),
    .C(div_val[19]),
    .D(_0670_),
    .X(_0672_));
 sky130_fd_sc_hd__or3_2 _1290_ (.A(div_val[23]),
    .B(div_val[22]),
    .C(_0672_),
    .X(_0673_));
 sky130_fd_sc_hd__or4_2 _1291_ (.A(div_val[24]),
    .B(div_val[23]),
    .C(div_val[22]),
    .D(_0672_),
    .X(_0674_));
 sky130_fd_sc_hd__or3_2 _1292_ (.A(div_val[26]),
    .B(div_val[25]),
    .C(_0674_),
    .X(_0675_));
 sky130_fd_sc_hd__or4_2 _1293_ (.A(div_val[27]),
    .B(div_val[26]),
    .C(div_val[25]),
    .D(_0674_),
    .X(_0676_));
 sky130_fd_sc_hd__or3_2 _1294_ (.A(div_val[29]),
    .B(div_val[28]),
    .C(_0676_),
    .X(_0677_));
 sky130_fd_sc_hd__or4_2 _1295_ (.A(div_val[30]),
    .B(div_val[29]),
    .C(div_val[28]),
    .D(_0676_),
    .X(_0678_));
 sky130_fd_sc_hd__xor2_2 _1296_ (.A(div_val[30]),
    .B(_0677_),
    .X(_0679_));
 sky130_fd_sc_hd__nor2_2 _1297_ (.A(\div_inst.counter[30] ),
    .B(_0679_),
    .Y(_0680_));
 sky130_fd_sc_hd__xor2_2 _1298_ (.A(\div_inst.counter[30] ),
    .B(_0679_),
    .X(_0681_));
 sky130_fd_sc_hd__o21ai_2 _1299_ (.A1(div_val[28]),
    .A2(_0676_),
    .B1(div_val[29]),
    .Y(_0682_));
 sky130_fd_sc_hd__and2_2 _1300_ (.A(_0677_),
    .B(_0682_),
    .X(_0683_));
 sky130_fd_sc_hd__xor2_2 _1301_ (.A(div_val[28]),
    .B(_0676_),
    .X(_0684_));
 sky130_fd_sc_hd__o22a_2 _1302_ (.A1(\div_inst.counter[29] ),
    .A2(_0683_),
    .B1(_0684_),
    .B2(\div_inst.counter[28] ),
    .X(_0685_));
 sky130_fd_sc_hd__nand2_2 _1303_ (.A(\div_inst.counter[29] ),
    .B(_0683_),
    .Y(_0686_));
 sky130_fd_sc_hd__and3b_2 _1304_ (.A_N(_0685_),
    .B(_0686_),
    .C(_0681_),
    .X(_0687_));
 sky130_fd_sc_hd__xor2_2 _1305_ (.A(div_val[31]),
    .B(_0678_),
    .X(_0688_));
 sky130_fd_sc_hd__nor2_2 _1306_ (.A(\div_inst.counter[31] ),
    .B(_0688_),
    .Y(_0689_));
 sky130_fd_sc_hd__a22o_2 _1307_ (.A1(\div_inst.counter[29] ),
    .A2(_0683_),
    .B1(_0684_),
    .B2(\div_inst.counter[28] ),
    .X(_0690_));
 sky130_fd_sc_hd__and4bb_2 _1308_ (.A_N(_0689_),
    .B_N(_0690_),
    .C(_0681_),
    .D(_0685_),
    .X(_0691_));
 sky130_fd_sc_hd__o31a_2 _1309_ (.A1(div_val[26]),
    .A2(div_val[25]),
    .A3(_0674_),
    .B1(div_val[27]),
    .X(_0692_));
 sky130_fd_sc_hd__xor2_2 _1310_ (.A(div_val[27]),
    .B(_0675_),
    .X(_0693_));
 sky130_fd_sc_hd__and3b_2 _1311_ (.A_N(_0692_),
    .B(\div_inst.counter[27] ),
    .C(_0676_),
    .X(_0694_));
 sky130_fd_sc_hd__o21ai_2 _1312_ (.A1(div_val[25]),
    .A2(_0674_),
    .B1(div_val[26]),
    .Y(_0695_));
 sky130_fd_sc_hd__a21oi_2 _1313_ (.A1(_0675_),
    .A2(_0695_),
    .B1(\div_inst.counter[26] ),
    .Y(_0696_));
 sky130_fd_sc_hd__o21ba_2 _1314_ (.A1(\div_inst.counter[27] ),
    .A2(_0693_),
    .B1_N(_0696_),
    .X(_0697_));
 sky130_fd_sc_hd__o21bai_2 _1315_ (.A1(\div_inst.counter[27] ),
    .A2(_0693_),
    .B1_N(_0696_),
    .Y(_0698_));
 sky130_fd_sc_hd__a31o_2 _1316_ (.A1(\div_inst.counter[26] ),
    .A2(_0675_),
    .A3(_0695_),
    .B1(_0694_),
    .X(_0699_));
 sky130_fd_sc_hd__xor2_2 _1317_ (.A(div_val[25]),
    .B(_0674_),
    .X(_0700_));
 sky130_fd_sc_hd__and2_2 _1318_ (.A(\div_inst.counter[25] ),
    .B(_0700_),
    .X(_0701_));
 sky130_fd_sc_hd__nand2_2 _1319_ (.A(div_val[24]),
    .B(_0673_),
    .Y(_0702_));
 sky130_fd_sc_hd__and2_2 _1320_ (.A(_0674_),
    .B(_0702_),
    .X(_0703_));
 sky130_fd_sc_hd__o22ai_2 _1321_ (.A1(\div_inst.counter[25] ),
    .A2(_0700_),
    .B1(_0703_),
    .B2(\div_inst.counter[24] ),
    .Y(_0704_));
 sky130_fd_sc_hd__or4b_2 _1322_ (.A(_0698_),
    .B(_0699_),
    .C(_0701_),
    .D_N(_0704_),
    .X(_0705_));
 sky130_fd_sc_hd__a21o_2 _1323_ (.A1(\div_inst.counter[24] ),
    .A2(_0703_),
    .B1(_0701_),
    .X(_0706_));
 sky130_fd_sc_hd__or4_2 _1324_ (.A(_0698_),
    .B(_0699_),
    .C(_0704_),
    .D(_0706_),
    .X(_0707_));
 sky130_fd_sc_hd__o21ai_2 _1325_ (.A1(div_val[22]),
    .A2(_0672_),
    .B1(div_val[23]),
    .Y(_0708_));
 sky130_fd_sc_hd__a21o_2 _1326_ (.A1(_0673_),
    .A2(_0708_),
    .B1(\div_inst.counter[23] ),
    .X(_0709_));
 sky130_fd_sc_hd__xor2_2 _1327_ (.A(div_val[22]),
    .B(_0672_),
    .X(_0710_));
 sky130_fd_sc_hd__o21a_2 _1328_ (.A1(\div_inst.counter[22] ),
    .A2(_0710_),
    .B1(_0709_),
    .X(_0711_));
 sky130_fd_sc_hd__o21ai_2 _1329_ (.A1(\div_inst.counter[22] ),
    .A2(_0710_),
    .B1(_0709_),
    .Y(_0712_));
 sky130_fd_sc_hd__and3_2 _1330_ (.A(\div_inst.counter[23] ),
    .B(_0673_),
    .C(_0708_),
    .X(_0713_));
 sky130_fd_sc_hd__xor2_2 _1331_ (.A(div_val[21]),
    .B(_0671_),
    .X(_0714_));
 sky130_fd_sc_hd__a22o_2 _1332_ (.A1(\div_inst.counter[22] ),
    .A2(_0710_),
    .B1(_0714_),
    .B2(\div_inst.counter[21] ),
    .X(_0715_));
 sky130_fd_sc_hd__o21ai_2 _1333_ (.A1(div_val[19]),
    .A2(_0670_),
    .B1(div_val[20]),
    .Y(_0716_));
 sky130_fd_sc_hd__a21o_2 _1334_ (.A1(_0671_),
    .A2(_0716_),
    .B1(\div_inst.counter[20] ),
    .X(_0717_));
 sky130_fd_sc_hd__o21ai_2 _1335_ (.A1(\div_inst.counter[21] ),
    .A2(_0714_),
    .B1(_0717_),
    .Y(_0718_));
 sky130_fd_sc_hd__and3_2 _1336_ (.A(\div_inst.counter[20] ),
    .B(_0671_),
    .C(_0716_),
    .X(_0719_));
 sky130_fd_sc_hd__or4_2 _1337_ (.A(_0713_),
    .B(_0715_),
    .C(_0718_),
    .D(_0719_),
    .X(_0720_));
 sky130_fd_sc_hd__xor2_2 _1338_ (.A(div_val[19]),
    .B(_0670_),
    .X(_0721_));
 sky130_fd_sc_hd__nand2_2 _1339_ (.A(\div_inst.counter[19] ),
    .B(_0721_),
    .Y(_0722_));
 sky130_fd_sc_hd__nand2_2 _1340_ (.A(div_val[18]),
    .B(_0669_),
    .Y(_0723_));
 sky130_fd_sc_hd__a21o_2 _1341_ (.A1(_0670_),
    .A2(_0723_),
    .B1(\div_inst.counter[18] ),
    .X(_0724_));
 sky130_fd_sc_hd__o21a_2 _1342_ (.A1(\div_inst.counter[19] ),
    .A2(_0721_),
    .B1(_0724_),
    .X(_0725_));
 sky130_fd_sc_hd__o21ai_2 _1343_ (.A1(div_val[16]),
    .A2(_0668_),
    .B1(div_val[17]),
    .Y(_0726_));
 sky130_fd_sc_hd__a21o_2 _1344_ (.A1(_0669_),
    .A2(_0726_),
    .B1(\div_inst.counter[17] ),
    .X(_0727_));
 sky130_fd_sc_hd__xor2_2 _1345_ (.A(div_val[16]),
    .B(_0668_),
    .X(_0728_));
 sky130_fd_sc_hd__o21a_2 _1346_ (.A1(\div_inst.counter[16] ),
    .A2(_0728_),
    .B1(_0727_),
    .X(_0729_));
 sky130_fd_sc_hd__and3_2 _1347_ (.A(\div_inst.counter[18] ),
    .B(_0670_),
    .C(_0723_),
    .X(_0730_));
 sky130_fd_sc_hd__and3_2 _1348_ (.A(\div_inst.counter[17] ),
    .B(_0669_),
    .C(_0726_),
    .X(_0731_));
 sky130_fd_sc_hd__o31a_2 _1349_ (.A1(_0729_),
    .A2(_0730_),
    .A3(_0731_),
    .B1(_0725_),
    .X(_0732_));
 sky130_fd_sc_hd__or4b_2 _1350_ (.A(_0712_),
    .B(_0732_),
    .C(_0720_),
    .D_N(_0722_),
    .X(_0733_));
 sky130_fd_sc_hd__or3b_2 _1351_ (.A(_0713_),
    .B(_0715_),
    .C_N(_0718_),
    .X(_0734_));
 sky130_fd_sc_hd__o21a_2 _1352_ (.A1(_0711_),
    .A2(_0713_),
    .B1(_0734_),
    .X(_0735_));
 sky130_fd_sc_hd__nand2_2 _1353_ (.A(div_val[15]),
    .B(_0667_),
    .Y(_0736_));
 sky130_fd_sc_hd__and2_2 _1354_ (.A(_0668_),
    .B(_0736_),
    .X(_0737_));
 sky130_fd_sc_hd__o21ai_2 _1355_ (.A1(div_val[13]),
    .A2(_0666_),
    .B1(div_val[14]),
    .Y(_0738_));
 sky130_fd_sc_hd__and2_2 _1356_ (.A(_0667_),
    .B(_0738_),
    .X(_0739_));
 sky130_fd_sc_hd__o22a_2 _1357_ (.A1(\div_inst.counter[15] ),
    .A2(_0737_),
    .B1(_0739_),
    .B2(\div_inst.counter[14] ),
    .X(_0740_));
 sky130_fd_sc_hd__xor2_2 _1358_ (.A(div_val[13]),
    .B(_0666_),
    .X(_0741_));
 sky130_fd_sc_hd__a22o_2 _1359_ (.A1(\div_inst.counter[14] ),
    .A2(_0739_),
    .B1(_0741_),
    .B2(\div_inst.counter[13] ),
    .X(_0742_));
 sky130_fd_sc_hd__and2_2 _1360_ (.A(\div_inst.counter[15] ),
    .B(_0737_),
    .X(_0743_));
 sky130_fd_sc_hd__nand2_2 _1361_ (.A(div_val[12]),
    .B(_0665_),
    .Y(_0744_));
 sky130_fd_sc_hd__and2_2 _1362_ (.A(_0666_),
    .B(_0744_),
    .X(_0745_));
 sky130_fd_sc_hd__o22a_2 _1363_ (.A1(\div_inst.counter[13] ),
    .A2(_0741_),
    .B1(_0745_),
    .B2(\div_inst.counter[12] ),
    .X(_0746_));
 sky130_fd_sc_hd__nand2_2 _1364_ (.A(\div_inst.counter[12] ),
    .B(_0745_),
    .Y(_0747_));
 sky130_fd_sc_hd__and4bb_2 _1365_ (.A_N(_0742_),
    .B_N(_0743_),
    .C(_0746_),
    .D(_0747_),
    .X(_0748_));
 sky130_fd_sc_hd__nand2_2 _1366_ (.A(_0740_),
    .B(_0748_),
    .Y(_0749_));
 sky130_fd_sc_hd__o21ai_2 _1367_ (.A1(div_val[10]),
    .A2(_0664_),
    .B1(div_val[11]),
    .Y(_0750_));
 sky130_fd_sc_hd__a21o_2 _1368_ (.A1(_0665_),
    .A2(_0750_),
    .B1(\div_inst.counter[11] ),
    .X(_0751_));
 sky130_fd_sc_hd__xor2_2 _1369_ (.A(div_val[10]),
    .B(_0664_),
    .X(_0752_));
 sky130_fd_sc_hd__o21a_2 _1370_ (.A1(\div_inst.counter[10] ),
    .A2(_0752_),
    .B1(_0751_),
    .X(_0753_));
 sky130_fd_sc_hd__o31ai_2 _1371_ (.A1(div_val[7]),
    .A2(div_val[8]),
    .A3(_0662_),
    .B1(div_val[9]),
    .Y(_0754_));
 sky130_fd_sc_hd__and2_2 _1372_ (.A(_0664_),
    .B(_0754_),
    .X(_0755_));
 sky130_fd_sc_hd__and3_2 _1373_ (.A(\div_inst.counter[11] ),
    .B(_0665_),
    .C(_0750_),
    .X(_0756_));
 sky130_fd_sc_hd__xnor2_2 _1374_ (.A(div_val[8]),
    .B(_0663_),
    .Y(_0757_));
 sky130_fd_sc_hd__o22a_2 _1375_ (.A1(\div_inst.counter[9] ),
    .A2(_0755_),
    .B1(_0757_),
    .B2(\div_inst.counter[8] ),
    .X(_0758_));
 sky130_fd_sc_hd__nand2_2 _1376_ (.A(\div_inst.counter[8] ),
    .B(_0757_),
    .Y(_0759_));
 sky130_fd_sc_hd__a221oi_2 _1377_ (.A1(\div_inst.counter[10] ),
    .A2(_0752_),
    .B1(_0755_),
    .B2(\div_inst.counter[9] ),
    .C1(_0756_),
    .Y(_0760_));
 sky130_fd_sc_hd__inv_2 _1378_ (.A(_0760_),
    .Y(_0761_));
 sky130_fd_sc_hd__and4_2 _1379_ (.A(_0753_),
    .B(_0758_),
    .C(_0759_),
    .D(_0760_),
    .X(_0762_));
 sky130_fd_sc_hd__and2_2 _1380_ (.A(div_val[7]),
    .B(_0662_),
    .X(_0763_));
 sky130_fd_sc_hd__nor2_2 _1381_ (.A(_0663_),
    .B(_0763_),
    .Y(_0764_));
 sky130_fd_sc_hd__nand2_2 _1382_ (.A(\div_inst.counter[7] ),
    .B(_0764_),
    .Y(_0765_));
 sky130_fd_sc_hd__o31ai_2 _1383_ (.A1(div_val[5]),
    .A2(div_val[4]),
    .A3(_0660_),
    .B1(div_val[6]),
    .Y(_0766_));
 sky130_fd_sc_hd__and2_2 _1384_ (.A(_0662_),
    .B(_0766_),
    .X(_0767_));
 sky130_fd_sc_hd__o22a_2 _1385_ (.A1(\div_inst.counter[7] ),
    .A2(_0764_),
    .B1(_0767_),
    .B2(\div_inst.counter[6] ),
    .X(_0768_));
 sky130_fd_sc_hd__xnor2_2 _1386_ (.A(div_val[5]),
    .B(_0661_),
    .Y(_0769_));
 sky130_fd_sc_hd__and2_2 _1387_ (.A(div_val[4]),
    .B(_0660_),
    .X(_0770_));
 sky130_fd_sc_hd__nor2_2 _1388_ (.A(_0661_),
    .B(_0770_),
    .Y(_0771_));
 sky130_fd_sc_hd__o22a_2 _1389_ (.A1(\div_inst.counter[5] ),
    .A2(_0769_),
    .B1(_0771_),
    .B2(\div_inst.counter[4] ),
    .X(_0772_));
 sky130_fd_sc_hd__a22o_2 _1390_ (.A1(\div_inst.counter[6] ),
    .A2(_0767_),
    .B1(_0769_),
    .B2(\div_inst.counter[5] ),
    .X(_0773_));
 sky130_fd_sc_hd__o21ai_2 _1391_ (.A1(_0772_),
    .A2(_0773_),
    .B1(_0768_),
    .Y(_0774_));
 sky130_fd_sc_hd__a21oi_2 _1392_ (.A1(\div_inst.counter[4] ),
    .A2(_0771_),
    .B1(_0773_),
    .Y(_0775_));
 sky130_fd_sc_hd__and4_2 _1393_ (.A(_0765_),
    .B(_0768_),
    .C(_0772_),
    .D(_0775_),
    .X(_0776_));
 sky130_fd_sc_hd__o21ai_2 _1394_ (.A1(div_val[2]),
    .A2(_0659_),
    .B1(div_val[3]),
    .Y(_0777_));
 sky130_fd_sc_hd__and2_2 _1395_ (.A(_0660_),
    .B(_0777_),
    .X(_0778_));
 sky130_fd_sc_hd__nand2_2 _1396_ (.A(\div_inst.counter[3] ),
    .B(_0778_),
    .Y(_0779_));
 sky130_fd_sc_hd__or2_2 _1397_ (.A(\div_inst.counter[3] ),
    .B(_0778_),
    .X(_0780_));
 sky130_fd_sc_hd__xor2_2 _1398_ (.A(div_val[2]),
    .B(_0659_),
    .X(_0781_));
 sky130_fd_sc_hd__or2_2 _1399_ (.A(\div_inst.counter[2] ),
    .B(_0781_),
    .X(_0782_));
 sky130_fd_sc_hd__nand2_2 _1400_ (.A(div_val[0]),
    .B(div_val[1]),
    .Y(_0783_));
 sky130_fd_sc_hd__a21o_2 _1401_ (.A1(_0659_),
    .A2(_0783_),
    .B1(\div_inst.counter[1] ),
    .X(_0784_));
 sky130_fd_sc_hd__a32o_2 _1402_ (.A1(\div_inst.counter[1] ),
    .A2(_0659_),
    .A3(_0783_),
    .B1(div_val[0]),
    .B2(\div_inst.counter[0] ),
    .X(_0785_));
 sky130_fd_sc_hd__a22o_2 _1403_ (.A1(\div_inst.counter[2] ),
    .A2(_0781_),
    .B1(_0784_),
    .B2(_0785_),
    .X(_0786_));
 sky130_fd_sc_hd__nand3_2 _1404_ (.A(_0780_),
    .B(_0782_),
    .C(_0786_),
    .Y(_0787_));
 sky130_fd_sc_hd__a32o_2 _1405_ (.A1(_0776_),
    .A2(_0779_),
    .A3(_0787_),
    .B1(_0774_),
    .B2(_0765_),
    .X(_0788_));
 sky130_fd_sc_hd__nand2_2 _1406_ (.A(_0762_),
    .B(_0788_),
    .Y(_0789_));
 sky130_fd_sc_hd__o221a_2 _1407_ (.A1(_0753_),
    .A2(_0756_),
    .B1(_0758_),
    .B2(_0761_),
    .C1(_0789_),
    .X(_0790_));
 sky130_fd_sc_hd__o21a_2 _1408_ (.A1(_0742_),
    .A2(_0746_),
    .B1(_0740_),
    .X(_0791_));
 sky130_fd_sc_hd__or2_2 _1409_ (.A(_0743_),
    .B(_0791_),
    .X(_0792_));
 sky130_fd_sc_hd__o21a_2 _1410_ (.A1(_0749_),
    .A2(_0790_),
    .B1(_0792_),
    .X(_0793_));
 sky130_fd_sc_hd__nand2_2 _1411_ (.A(\div_inst.counter[16] ),
    .B(_0728_),
    .Y(_0794_));
 sky130_fd_sc_hd__nand3_2 _1412_ (.A(_0722_),
    .B(_0729_),
    .C(_0794_),
    .Y(_0795_));
 sky130_fd_sc_hd__or4b_2 _1413_ (.A(_0730_),
    .B(_0731_),
    .C(_0795_),
    .D_N(_0725_),
    .X(_0796_));
 sky130_fd_sc_hd__or3_2 _1414_ (.A(_0712_),
    .B(_0720_),
    .C(_0796_),
    .X(_0797_));
 sky130_fd_sc_hd__o211a_2 _1415_ (.A1(_0793_),
    .A2(_0797_),
    .B1(_0733_),
    .C1(_0735_),
    .X(_0798_));
 sky130_fd_sc_hd__o221ai_2 _1416_ (.A1(_0694_),
    .A2(_0697_),
    .B1(_0707_),
    .B2(_0798_),
    .C1(_0705_),
    .Y(_0799_));
 sky130_fd_sc_hd__a2111o_2 _1417_ (.A1(_0691_),
    .A2(_0799_),
    .B1(_0680_),
    .C1(_0687_),
    .D1(_0689_),
    .X(_0800_));
 sky130_fd_sc_hd__a2bb2o_2 _1418_ (.A1_N(\div_inst.counter[0] ),
    .A2_N(div_val[0]),
    .B1(\div_inst.counter[2] ),
    .B2(_0781_),
    .X(_0801_));
 sky130_fd_sc_hd__and4bb_2 _1419_ (.A_N(_0785_),
    .B_N(_0801_),
    .C(_0779_),
    .D(_0784_),
    .X(_0802_));
 sky130_fd_sc_hd__and4_2 _1420_ (.A(_0776_),
    .B(_0780_),
    .C(_0782_),
    .D(_0802_),
    .X(_0803_));
 sky130_fd_sc_hd__nand2_2 _1421_ (.A(_0762_),
    .B(_0803_),
    .Y(_0804_));
 sky130_fd_sc_hd__nor4_2 _1422_ (.A(_0707_),
    .B(_0749_),
    .C(_0797_),
    .D(_0804_),
    .Y(_0805_));
 sky130_fd_sc_hd__a22oi_2 _1423_ (.A1(\div_inst.counter[31] ),
    .A2(_0688_),
    .B1(_0691_),
    .B2(_0805_),
    .Y(_0806_));
 sky130_fd_sc_hd__nand2_2 _1424_ (.A(_0800_),
    .B(_0806_),
    .Y(_0807_));
 sky130_fd_sc_hd__and3_2 _1425_ (.A(\div_inst.counter[0] ),
    .B(\div_inst.counter[1] ),
    .C(\div_inst.counter[2] ),
    .X(_0808_));
 sky130_fd_sc_hd__and4_2 _1426_ (.A(\div_inst.counter[0] ),
    .B(\div_inst.counter[1] ),
    .C(\div_inst.counter[3] ),
    .D(\div_inst.counter[2] ),
    .X(_0809_));
 sky130_fd_sc_hd__and3_2 _1427_ (.A(\div_inst.counter[5] ),
    .B(\div_inst.counter[4] ),
    .C(_0809_),
    .X(_0810_));
 sky130_fd_sc_hd__nand2_2 _1428_ (.A(\div_inst.counter[6] ),
    .B(_0810_),
    .Y(_0811_));
 sky130_fd_sc_hd__and2_2 _1429_ (.A(\div_inst.counter[7] ),
    .B(\div_inst.counter[6] ),
    .X(_0812_));
 sky130_fd_sc_hd__and4_2 _1430_ (.A(\div_inst.counter[5] ),
    .B(\div_inst.counter[4] ),
    .C(_0809_),
    .D(_0812_),
    .X(_0813_));
 sky130_fd_sc_hd__and2_2 _1431_ (.A(\div_inst.counter[9] ),
    .B(\div_inst.counter[8] ),
    .X(_0814_));
 sky130_fd_sc_hd__and2_2 _1432_ (.A(_0813_),
    .B(_0814_),
    .X(_0815_));
 sky130_fd_sc_hd__and2_2 _1433_ (.A(\div_inst.counter[11] ),
    .B(\div_inst.counter[10] ),
    .X(_0816_));
 sky130_fd_sc_hd__nand2_2 _1434_ (.A(_0815_),
    .B(_0816_),
    .Y(_0817_));
 sky130_fd_sc_hd__and4_2 _1435_ (.A(\div_inst.counter[12] ),
    .B(_0813_),
    .C(_0814_),
    .D(_0816_),
    .X(_0818_));
 sky130_fd_sc_hd__and2_2 _1436_ (.A(\div_inst.counter[13] ),
    .B(_0818_),
    .X(_0819_));
 sky130_fd_sc_hd__and2_2 _1437_ (.A(\div_inst.counter[15] ),
    .B(\div_inst.counter[14] ),
    .X(_0820_));
 sky130_fd_sc_hd__and3_2 _1438_ (.A(\div_inst.counter[13] ),
    .B(_0818_),
    .C(_0820_),
    .X(_0821_));
 sky130_fd_sc_hd__and2_2 _1439_ (.A(\div_inst.counter[17] ),
    .B(\div_inst.counter[16] ),
    .X(_0822_));
 sky130_fd_sc_hd__and4_2 _1440_ (.A(\div_inst.counter[13] ),
    .B(_0818_),
    .C(_0820_),
    .D(_0822_),
    .X(_0823_));
 sky130_fd_sc_hd__and2_2 _1441_ (.A(\div_inst.counter[19] ),
    .B(\div_inst.counter[18] ),
    .X(_0824_));
 sky130_fd_sc_hd__and2_2 _1442_ (.A(_0823_),
    .B(_0824_),
    .X(_0825_));
 sky130_fd_sc_hd__and3_2 _1443_ (.A(\div_inst.counter[20] ),
    .B(_0823_),
    .C(_0824_),
    .X(_0826_));
 sky130_fd_sc_hd__and4_2 _1444_ (.A(\div_inst.counter[21] ),
    .B(\div_inst.counter[20] ),
    .C(_0823_),
    .D(_0824_),
    .X(_0827_));
 sky130_fd_sc_hd__and2_2 _1445_ (.A(\div_inst.counter[23] ),
    .B(\div_inst.counter[22] ),
    .X(_0828_));
 sky130_fd_sc_hd__and2_2 _1446_ (.A(_0827_),
    .B(_0828_),
    .X(_0829_));
 sky130_fd_sc_hd__and2_2 _1447_ (.A(\div_inst.counter[25] ),
    .B(\div_inst.counter[24] ),
    .X(_0830_));
 sky130_fd_sc_hd__nand2_2 _1448_ (.A(_0829_),
    .B(_0830_),
    .Y(_0831_));
 sky130_fd_sc_hd__and2_2 _1449_ (.A(\div_inst.counter[27] ),
    .B(\div_inst.counter[26] ),
    .X(_0832_));
 sky130_fd_sc_hd__and4_2 _1450_ (.A(_0827_),
    .B(_0828_),
    .C(_0830_),
    .D(_0832_),
    .X(_0833_));
 sky130_fd_sc_hd__and3_2 _1451_ (.A(\div_inst.counter[29] ),
    .B(\div_inst.counter[28] ),
    .C(_0833_),
    .X(_0834_));
 sky130_fd_sc_hd__or2_2 _1452_ (.A(\div_inst.counter[30] ),
    .B(_0834_),
    .X(_0835_));
 sky130_fd_sc_hd__nand2_2 _1453_ (.A(\div_inst.counter[30] ),
    .B(_0834_),
    .Y(_0836_));
 sky130_fd_sc_hd__nand2_2 _1454_ (.A(_0835_),
    .B(_0836_),
    .Y(_0837_));
 sky130_fd_sc_hd__and3b_2 _1455_ (.A_N(\div_inst.counter[31] ),
    .B(\div_inst.counter[30] ),
    .C(_0834_),
    .X(_0838_));
 sky130_fd_sc_hd__a21oi_2 _1456_ (.A1(\div_inst.counter[31] ),
    .A2(_0836_),
    .B1(_0838_),
    .Y(_0839_));
 sky130_fd_sc_hd__o21ai_2 _1457_ (.A1(div_val[31]),
    .A2(_0837_),
    .B1(_0839_),
    .Y(_0840_));
 sky130_fd_sc_hd__a21oi_2 _1458_ (.A1(\div_inst.counter[28] ),
    .A2(_0833_),
    .B1(\div_inst.counter[29] ),
    .Y(_0841_));
 sky130_fd_sc_hd__or2_2 _1459_ (.A(_0834_),
    .B(_0841_),
    .X(_0842_));
 sky130_fd_sc_hd__or2_2 _1460_ (.A(div_val[30]),
    .B(_0842_),
    .X(_0843_));
 sky130_fd_sc_hd__xnor2_2 _1461_ (.A(\div_inst.counter[28] ),
    .B(_0833_),
    .Y(_0844_));
 sky130_fd_sc_hd__a31o_2 _1462_ (.A1(\div_inst.counter[26] ),
    .A2(_0829_),
    .A3(_0830_),
    .B1(\div_inst.counter[27] ),
    .X(_0845_));
 sky130_fd_sc_hd__nand2b_2 _1463_ (.A_N(_0833_),
    .B(_0845_),
    .Y(_0846_));
 sky130_fd_sc_hd__xor2_2 _1464_ (.A(\div_inst.counter[26] ),
    .B(_0831_),
    .X(_0847_));
 sky130_fd_sc_hd__a22o_2 _1465_ (.A1(div_val[28]),
    .A2(_0846_),
    .B1(_0847_),
    .B2(div_val[27]),
    .X(_0848_));
 sky130_fd_sc_hd__nor2_2 _1466_ (.A(div_val[27]),
    .B(_0847_),
    .Y(_0849_));
 sky130_fd_sc_hd__a31o_2 _1467_ (.A1(\div_inst.counter[24] ),
    .A2(_0827_),
    .A3(_0828_),
    .B1(\div_inst.counter[25] ),
    .X(_0850_));
 sky130_fd_sc_hd__nand2_2 _1468_ (.A(_0831_),
    .B(_0850_),
    .Y(_0851_));
 sky130_fd_sc_hd__nor2_2 _1469_ (.A(div_val[26]),
    .B(_0851_),
    .Y(_0852_));
 sky130_fd_sc_hd__xnor2_2 _1470_ (.A(\div_inst.counter[24] ),
    .B(_0829_),
    .Y(_0853_));
 sky130_fd_sc_hd__a22o_2 _1471_ (.A1(div_val[26]),
    .A2(_0851_),
    .B1(_0853_),
    .B2(div_val[25]),
    .X(_0854_));
 sky130_fd_sc_hd__o221a_2 _1472_ (.A1(div_val[27]),
    .A2(_0847_),
    .B1(_0851_),
    .B2(div_val[26]),
    .C1(_0854_),
    .X(_0855_));
 sky130_fd_sc_hd__nor2_2 _1473_ (.A(_0848_),
    .B(_0855_),
    .Y(_0856_));
 sky130_fd_sc_hd__nor2_2 _1474_ (.A(div_val[25]),
    .B(_0853_),
    .Y(_0857_));
 sky130_fd_sc_hd__a21oi_2 _1475_ (.A1(\div_inst.counter[22] ),
    .A2(_0827_),
    .B1(\div_inst.counter[23] ),
    .Y(_0858_));
 sky130_fd_sc_hd__or2_2 _1476_ (.A(_0829_),
    .B(_0858_),
    .X(_0859_));
 sky130_fd_sc_hd__or2_2 _1477_ (.A(div_val[24]),
    .B(_0859_),
    .X(_0860_));
 sky130_fd_sc_hd__xnor2_2 _1478_ (.A(\div_inst.counter[22] ),
    .B(_0827_),
    .Y(_0861_));
 sky130_fd_sc_hd__a22o_2 _1479_ (.A1(div_val[24]),
    .A2(_0859_),
    .B1(_0861_),
    .B2(div_val[23]),
    .X(_0862_));
 sky130_fd_sc_hd__xnor2_2 _1480_ (.A(\div_inst.counter[21] ),
    .B(_0826_),
    .Y(_0863_));
 sky130_fd_sc_hd__nor2_2 _1481_ (.A(\div_inst.counter[20] ),
    .B(_0825_),
    .Y(_0864_));
 sky130_fd_sc_hd__or2_2 _1482_ (.A(_0826_),
    .B(_0864_),
    .X(_0865_));
 sky130_fd_sc_hd__a22oi_2 _1483_ (.A1(div_val[22]),
    .A2(_0863_),
    .B1(_0865_),
    .B2(div_val[21]),
    .Y(_0866_));
 sky130_fd_sc_hd__a21oi_2 _1484_ (.A1(\div_inst.counter[18] ),
    .A2(_0823_),
    .B1(\div_inst.counter[19] ),
    .Y(_0867_));
 sky130_fd_sc_hd__or2_2 _1485_ (.A(_0825_),
    .B(_0867_),
    .X(_0868_));
 sky130_fd_sc_hd__o22ai_2 _1486_ (.A1(div_val[21]),
    .A2(_0865_),
    .B1(_0868_),
    .B2(div_val[20]),
    .Y(_0869_));
 sky130_fd_sc_hd__xnor2_2 _1487_ (.A(\div_inst.counter[18] ),
    .B(_0823_),
    .Y(_0870_));
 sky130_fd_sc_hd__a22oi_2 _1488_ (.A1(div_val[20]),
    .A2(_0868_),
    .B1(_0870_),
    .B2(div_val[19]),
    .Y(_0871_));
 sky130_fd_sc_hd__a21oi_2 _1489_ (.A1(\div_inst.counter[16] ),
    .A2(_0821_),
    .B1(\div_inst.counter[17] ),
    .Y(_0872_));
 sky130_fd_sc_hd__or2_2 _1490_ (.A(_0823_),
    .B(_0872_),
    .X(_0873_));
 sky130_fd_sc_hd__xnor2_2 _1491_ (.A(\div_inst.counter[16] ),
    .B(_0821_),
    .Y(_0874_));
 sky130_fd_sc_hd__a22oi_2 _1492_ (.A1(div_val[18]),
    .A2(_0873_),
    .B1(_0874_),
    .B2(div_val[17]),
    .Y(_0875_));
 sky130_fd_sc_hd__nor2_2 _1493_ (.A(div_val[19]),
    .B(_0870_),
    .Y(_0876_));
 sky130_fd_sc_hd__nor2_2 _1494_ (.A(div_val[18]),
    .B(_0873_),
    .Y(_0877_));
 sky130_fd_sc_hd__nor2_2 _1495_ (.A(_0876_),
    .B(_0877_),
    .Y(_0878_));
 sky130_fd_sc_hd__o31a_2 _1496_ (.A1(_0875_),
    .A2(_0876_),
    .A3(_0877_),
    .B1(_0871_),
    .X(_0879_));
 sky130_fd_sc_hd__o21ai_2 _1497_ (.A1(_0869_),
    .A2(_0879_),
    .B1(_0866_),
    .Y(_0880_));
 sky130_fd_sc_hd__o22a_2 _1498_ (.A1(div_val[23]),
    .A2(_0861_),
    .B1(_0863_),
    .B2(div_val[22]),
    .X(_0881_));
 sky130_fd_sc_hd__and3b_2 _1499_ (.A_N(_0862_),
    .B(_0881_),
    .C(_0860_),
    .X(_0882_));
 sky130_fd_sc_hd__a22o_2 _1500_ (.A1(_0860_),
    .A2(_0862_),
    .B1(_0880_),
    .B2(_0882_),
    .X(_0883_));
 sky130_fd_sc_hd__a31o_2 _1501_ (.A1(\div_inst.counter[14] ),
    .A2(\div_inst.counter[13] ),
    .A3(_0818_),
    .B1(\div_inst.counter[15] ),
    .X(_0884_));
 sky130_fd_sc_hd__nand2b_2 _1502_ (.A_N(_0821_),
    .B(_0884_),
    .Y(_0885_));
 sky130_fd_sc_hd__xnor2_2 _1503_ (.A(\div_inst.counter[14] ),
    .B(_0819_),
    .Y(_0886_));
 sky130_fd_sc_hd__a22o_2 _1504_ (.A1(div_val[16]),
    .A2(_0885_),
    .B1(_0886_),
    .B2(div_val[15]),
    .X(_0887_));
 sky130_fd_sc_hd__nor2_2 _1505_ (.A(\div_inst.counter[13] ),
    .B(_0818_),
    .Y(_0888_));
 sky130_fd_sc_hd__or2_2 _1506_ (.A(_0819_),
    .B(_0888_),
    .X(_0889_));
 sky130_fd_sc_hd__o22a_2 _1507_ (.A1(div_val[15]),
    .A2(_0886_),
    .B1(_0889_),
    .B2(div_val[14]),
    .X(_0890_));
 sky130_fd_sc_hd__xor2_2 _1508_ (.A(\div_inst.counter[12] ),
    .B(_0817_),
    .X(_0891_));
 sky130_fd_sc_hd__a22o_2 _1509_ (.A1(div_val[14]),
    .A2(_0889_),
    .B1(_0891_),
    .B2(div_val[13]),
    .X(_0892_));
 sky130_fd_sc_hd__a31o_2 _1510_ (.A1(\div_inst.counter[10] ),
    .A2(_0813_),
    .A3(_0814_),
    .B1(\div_inst.counter[11] ),
    .X(_0893_));
 sky130_fd_sc_hd__nand2_2 _1511_ (.A(_0817_),
    .B(_0893_),
    .Y(_0894_));
 sky130_fd_sc_hd__o22a_2 _1512_ (.A1(div_val[13]),
    .A2(_0891_),
    .B1(_0894_),
    .B2(div_val[12]),
    .X(_0895_));
 sky130_fd_sc_hd__a21oi_2 _1513_ (.A1(\div_inst.counter[8] ),
    .A2(_0813_),
    .B1(\div_inst.counter[9] ),
    .Y(_0896_));
 sky130_fd_sc_hd__or2_2 _1514_ (.A(_0815_),
    .B(_0896_),
    .X(_0897_));
 sky130_fd_sc_hd__xnor2_2 _1515_ (.A(\div_inst.counter[10] ),
    .B(_0815_),
    .Y(_0898_));
 sky130_fd_sc_hd__xnor2_2 _1516_ (.A(\div_inst.counter[8] ),
    .B(_0813_),
    .Y(_0899_));
 sky130_fd_sc_hd__a22oi_2 _1517_ (.A1(div_val[10]),
    .A2(_0897_),
    .B1(_0899_),
    .B2(div_val[9]),
    .Y(_0900_));
 sky130_fd_sc_hd__nor2_2 _1518_ (.A(div_val[9]),
    .B(_0899_),
    .Y(_0901_));
 sky130_fd_sc_hd__nor2_2 _1519_ (.A(\div_inst.counter[3] ),
    .B(_0808_),
    .Y(_0902_));
 sky130_fd_sc_hd__or2_2 _1520_ (.A(_0809_),
    .B(_0902_),
    .X(_0903_));
 sky130_fd_sc_hd__a21oi_2 _1521_ (.A1(\div_inst.counter[0] ),
    .A2(\div_inst.counter[1] ),
    .B1(\div_inst.counter[2] ),
    .Y(_0904_));
 sky130_fd_sc_hd__or2_2 _1522_ (.A(_0808_),
    .B(_0904_),
    .X(_0905_));
 sky130_fd_sc_hd__a22o_2 _1523_ (.A1(div_val[4]),
    .A2(_0903_),
    .B1(_0905_),
    .B2(div_val[3]),
    .X(_0906_));
 sky130_fd_sc_hd__o22a_2 _1524_ (.A1(div_val[4]),
    .A2(_0903_),
    .B1(_0905_),
    .B2(div_val[3]),
    .X(_0907_));
 sky130_fd_sc_hd__xnor2_2 _1525_ (.A(\div_inst.counter[0] ),
    .B(\div_inst.counter[1] ),
    .Y(_0908_));
 sky130_fd_sc_hd__o2bb2a_2 _1526_ (.A1_N(div_val[2]),
    .A2_N(_0908_),
    .B1(\div_inst.counter[0] ),
    .B2(div_val[1]),
    .X(_0909_));
 sky130_fd_sc_hd__or2_2 _1527_ (.A(div_val[2]),
    .B(_0908_),
    .X(_0910_));
 sky130_fd_sc_hd__and4b_2 _1528_ (.A_N(_0906_),
    .B(_0907_),
    .C(_0909_),
    .D(_0910_),
    .X(_0911_));
 sky130_fd_sc_hd__o21a_2 _1529_ (.A1(div_val[4]),
    .A2(_0903_),
    .B1(_0906_),
    .X(_0912_));
 sky130_fd_sc_hd__a311o_2 _1530_ (.A1(div_val[2]),
    .A2(_0907_),
    .A3(_0908_),
    .B1(_0911_),
    .C1(_0912_),
    .X(_0913_));
 sky130_fd_sc_hd__xnor2_2 _1531_ (.A(\div_inst.counter[4] ),
    .B(_0809_),
    .Y(_0914_));
 sky130_fd_sc_hd__or2_2 _1532_ (.A(div_val[5]),
    .B(_0914_),
    .X(_0915_));
 sky130_fd_sc_hd__xor2_2 _1533_ (.A(\div_inst.counter[7] ),
    .B(_0811_),
    .X(_0916_));
 sky130_fd_sc_hd__or2_2 _1534_ (.A(div_val[8]),
    .B(_0916_),
    .X(_0917_));
 sky130_fd_sc_hd__or2_2 _1535_ (.A(\div_inst.counter[6] ),
    .B(_0810_),
    .X(_0918_));
 sky130_fd_sc_hd__nand2_2 _1536_ (.A(_0811_),
    .B(_0918_),
    .Y(_0919_));
 sky130_fd_sc_hd__a21oi_2 _1537_ (.A1(\div_inst.counter[4] ),
    .A2(_0809_),
    .B1(\div_inst.counter[5] ),
    .Y(_0920_));
 sky130_fd_sc_hd__or2_2 _1538_ (.A(_0810_),
    .B(_0920_),
    .X(_0921_));
 sky130_fd_sc_hd__o22a_2 _1539_ (.A1(div_val[7]),
    .A2(_0919_),
    .B1(_0921_),
    .B2(div_val[6]),
    .X(_0922_));
 sky130_fd_sc_hd__a22o_2 _1540_ (.A1(div_val[8]),
    .A2(_0916_),
    .B1(_0919_),
    .B2(div_val[7]),
    .X(_0923_));
 sky130_fd_sc_hd__a22o_2 _1541_ (.A1(div_val[5]),
    .A2(_0914_),
    .B1(_0921_),
    .B2(div_val[6]),
    .X(_0924_));
 sky130_fd_sc_hd__a21o_2 _1542_ (.A1(_0913_),
    .A2(_0915_),
    .B1(_0924_),
    .X(_0925_));
 sky130_fd_sc_hd__and3b_2 _1543_ (.A_N(_0923_),
    .B(_0917_),
    .C(_0922_),
    .X(_0926_));
 sky130_fd_sc_hd__a22oi_2 _1544_ (.A1(_0917_),
    .A2(_0923_),
    .B1(_0925_),
    .B2(_0926_),
    .Y(_0927_));
 sky130_fd_sc_hd__o21ai_2 _1545_ (.A1(_0901_),
    .A2(_0927_),
    .B1(_0900_),
    .Y(_0928_));
 sky130_fd_sc_hd__o221a_2 _1546_ (.A1(div_val[10]),
    .A2(_0897_),
    .B1(_0898_),
    .B2(div_val[11]),
    .C1(_0928_),
    .X(_0929_));
 sky130_fd_sc_hd__a22oi_2 _1547_ (.A1(div_val[12]),
    .A2(_0894_),
    .B1(_0898_),
    .B2(div_val[11]),
    .Y(_0930_));
 sky130_fd_sc_hd__inv_2 _1548_ (.A(_0930_),
    .Y(_0931_));
 sky130_fd_sc_hd__o21a_2 _1549_ (.A1(_0929_),
    .A2(_0931_),
    .B1(_0895_),
    .X(_0932_));
 sky130_fd_sc_hd__o21a_2 _1550_ (.A1(_0892_),
    .A2(_0932_),
    .B1(_0890_),
    .X(_0933_));
 sky130_fd_sc_hd__or2_2 _1551_ (.A(_0887_),
    .B(_0933_),
    .X(_0934_));
 sky130_fd_sc_hd__o221a_2 _1552_ (.A1(div_val[17]),
    .A2(_0874_),
    .B1(_0885_),
    .B2(div_val[16]),
    .C1(_0875_),
    .X(_0935_));
 sky130_fd_sc_hd__and4b_2 _1553_ (.A_N(_0869_),
    .B(_0871_),
    .C(_0878_),
    .D(_0935_),
    .X(_0936_));
 sky130_fd_sc_hd__and3_2 _1554_ (.A(_0866_),
    .B(_0882_),
    .C(_0936_),
    .X(_0937_));
 sky130_fd_sc_hd__a21oi_2 _1555_ (.A1(\div_inst.counter[0] ),
    .A2(div_val[1]),
    .B1(_0924_),
    .Y(_0938_));
 sky130_fd_sc_hd__nor2_2 _1556_ (.A(div_val[28]),
    .B(_0846_),
    .Y(_0939_));
 sky130_fd_sc_hd__and2_2 _1557_ (.A(div_val[31]),
    .B(_0837_),
    .X(_0940_));
 sky130_fd_sc_hd__o21ai_2 _1558_ (.A1(div_val[29]),
    .A2(_0844_),
    .B1(_0843_),
    .Y(_0941_));
 sky130_fd_sc_hd__a22o_2 _1559_ (.A1(div_val[30]),
    .A2(_0842_),
    .B1(_0844_),
    .B2(div_val[29]),
    .X(_0942_));
 sky130_fd_sc_hd__or4_2 _1560_ (.A(_0840_),
    .B(_0940_),
    .C(_0941_),
    .D(_0942_),
    .X(_0943_));
 sky130_fd_sc_hd__or3_2 _1561_ (.A(_0848_),
    .B(_0849_),
    .C(_0939_),
    .X(_0944_));
 sky130_fd_sc_hd__or4_2 _1562_ (.A(_0852_),
    .B(_0854_),
    .C(_0857_),
    .D(_0944_),
    .X(_0945_));
 sky130_fd_sc_hd__nor2_2 _1563_ (.A(_0943_),
    .B(_0945_),
    .Y(_0946_));
 sky130_fd_sc_hd__nand2_2 _1564_ (.A(_0937_),
    .B(_0946_),
    .Y(_0947_));
 sky130_fd_sc_hd__a21oi_2 _1565_ (.A1(_0843_),
    .A2(_0942_),
    .B1(_0940_),
    .Y(_0948_));
 sky130_fd_sc_hd__o32a_2 _1566_ (.A1(_0856_),
    .A2(_0939_),
    .A3(_0943_),
    .B1(_0948_),
    .B2(_0840_),
    .X(_0949_));
 sky130_fd_sc_hd__a21bo_2 _1567_ (.A1(_0883_),
    .A2(_0946_),
    .B1_N(_0949_),
    .X(_0950_));
 sky130_fd_sc_hd__a31o_2 _1568_ (.A1(_0934_),
    .A2(_0937_),
    .A3(_0946_),
    .B1(_0950_),
    .X(_0951_));
 sky130_fd_sc_hd__and4_2 _1569_ (.A(_0900_),
    .B(_0911_),
    .C(_0926_),
    .D(_0938_),
    .X(_0952_));
 sky130_fd_sc_hd__o221a_2 _1570_ (.A1(div_val[10]),
    .A2(_0897_),
    .B1(_0898_),
    .B2(div_val[11]),
    .C1(_0952_),
    .X(_0953_));
 sky130_fd_sc_hd__and4b_2 _1571_ (.A_N(_0892_),
    .B(_0895_),
    .C(_0930_),
    .D(_0953_),
    .X(_0954_));
 sky130_fd_sc_hd__nand4b_2 _1572_ (.A_N(_0901_),
    .B(_0915_),
    .C(_0954_),
    .D(_0890_),
    .Y(_0955_));
 sky130_fd_sc_hd__o31a_2 _1573_ (.A1(_0887_),
    .A2(_0947_),
    .A3(_0955_),
    .B1(_0951_),
    .X(_0956_));
 sky130_fd_sc_hd__o21a_2 _1574_ (.A1(_0807_),
    .A2(_0956_),
    .B1(rst_n),
    .X(_0036_));
 sky130_fd_sc_hd__mux2_1 _1575_ (.A0(initial_freq[1]),
    .A1(\lf_inst.integrator[1] ),
    .S(rst_n),
    .X(_0037_));
 sky130_fd_sc_hd__mux2_1 _1576_ (.A0(initial_freq[2]),
    .A1(\lf_inst.integrator[2] ),
    .S(rst_n),
    .X(_0038_));
 sky130_fd_sc_hd__and2_2 _1577_ (.A(_0453_),
    .B(initial_freq[3]),
    .X(_0957_));
 sky130_fd_sc_hd__a21o_2 _1578_ (.A1(rst_n),
    .A2(\lf_inst.integrator[3] ),
    .B1(_0957_),
    .X(_0039_));
 sky130_fd_sc_hd__mux2_1 _1579_ (.A0(initial_freq[4]),
    .A1(\lf_inst.integrator[4] ),
    .S(rst_n),
    .X(_0040_));
 sky130_fd_sc_hd__and2_2 _1580_ (.A(_0453_),
    .B(initial_freq[5]),
    .X(_0958_));
 sky130_fd_sc_hd__a21o_2 _1581_ (.A1(rst_n),
    .A2(\lf_inst.integrator[5] ),
    .B1(_0958_),
    .X(_0041_));
 sky130_fd_sc_hd__and2_2 _1582_ (.A(_0453_),
    .B(initial_freq[6]),
    .X(_0959_));
 sky130_fd_sc_hd__a21o_2 _1583_ (.A1(rst_n),
    .A2(\lf_inst.integrator[6] ),
    .B1(_0959_),
    .X(_0042_));
 sky130_fd_sc_hd__and2_2 _1584_ (.A(_0453_),
    .B(initial_freq[7]),
    .X(_0960_));
 sky130_fd_sc_hd__a21o_2 _1585_ (.A1(rst_n),
    .A2(\lf_inst.integrator[7] ),
    .B1(_0960_),
    .X(_0043_));
 sky130_fd_sc_hd__mux2_1 _1586_ (.A0(initial_freq[8]),
    .A1(\lf_inst.integrator[8] ),
    .S(rst_n),
    .X(_0044_));
 sky130_fd_sc_hd__mux2_1 _1587_ (.A0(initial_freq[0]),
    .A1(\lf_inst.integrator[0] ),
    .S(rst_n),
    .X(_0045_));
 sky130_fd_sc_hd__and2b_2 _1588_ (.A_N(\dynamic_ki[2] ),
    .B(\lf_inst.error_in[0] ),
    .X(_0961_));
 sky130_fd_sc_hd__and2_2 _1589_ (.A(\lf_inst.integrator[9] ),
    .B(_0961_),
    .X(_0962_));
 sky130_fd_sc_hd__xnor2_2 _1590_ (.A(\lf_inst.integrator[9] ),
    .B(_0961_),
    .Y(_0963_));
 sky130_fd_sc_hd__and2_2 _1591_ (.A(rst_n),
    .B(\lf_inst.sample_en ),
    .X(_0964_));
 sky130_fd_sc_hd__nand2_2 _1592_ (.A(rst_n),
    .B(\lf_inst.sample_en ),
    .Y(_0965_));
 sky130_fd_sc_hd__nor2_2 _1593_ (.A(_0963_),
    .B(_0965_),
    .Y(_0966_));
 sky130_fd_sc_hd__nor2_2 _1594_ (.A(_0453_),
    .B(\lf_inst.sample_en ),
    .Y(_0967_));
 sky130_fd_sc_hd__or2_2 _1595_ (.A(_0453_),
    .B(\lf_inst.sample_en ),
    .X(_0968_));
 sky130_fd_sc_hd__and2_2 _1596_ (.A(_0453_),
    .B(initial_freq[9]),
    .X(_0969_));
 sky130_fd_sc_hd__a211o_2 _1597_ (.A1(\lf_inst.integrator[9] ),
    .A2(_0967_),
    .B1(_0969_),
    .C1(_0966_),
    .X(_0046_));
 sky130_fd_sc_hd__and2b_2 _1598_ (.A_N(\dynamic_ki[2] ),
    .B(\lf_inst.error_in[1] ),
    .X(_0970_));
 sky130_fd_sc_hd__nand2b_2 _1599_ (.A_N(\dynamic_ki[2] ),
    .B(\lf_inst.error_in[1] ),
    .Y(_0971_));
 sky130_fd_sc_hd__and2_2 _1600_ (.A(\lf_inst.integrator[10] ),
    .B(_0970_),
    .X(_0972_));
 sky130_fd_sc_hd__or2_2 _1601_ (.A(\lf_inst.integrator[10] ),
    .B(_0970_),
    .X(_0973_));
 sky130_fd_sc_hd__xnor2_2 _1602_ (.A(\lf_inst.integrator[10] ),
    .B(_0971_),
    .Y(_0974_));
 sky130_fd_sc_hd__xnor2_2 _1603_ (.A(_0962_),
    .B(_0974_),
    .Y(_0975_));
 sky130_fd_sc_hd__nor2_2 _1604_ (.A(_0965_),
    .B(_0975_),
    .Y(_0976_));
 sky130_fd_sc_hd__and2_2 _1605_ (.A(_0453_),
    .B(initial_freq[10]),
    .X(_0977_));
 sky130_fd_sc_hd__a211o_2 _1606_ (.A1(\lf_inst.integrator[10] ),
    .A2(_0967_),
    .B1(_0976_),
    .C1(_0977_),
    .X(_0047_));
 sky130_fd_sc_hd__a21oi_2 _1607_ (.A1(_0962_),
    .A2(_0973_),
    .B1(_0972_),
    .Y(_0978_));
 sky130_fd_sc_hd__nor2_2 _1608_ (.A(\lf_inst.integrator[11] ),
    .B(_0970_),
    .Y(_0979_));
 sky130_fd_sc_hd__and2_2 _1609_ (.A(\lf_inst.integrator[11] ),
    .B(_0970_),
    .X(_0980_));
 sky130_fd_sc_hd__or2_2 _1610_ (.A(_0979_),
    .B(_0980_),
    .X(_0981_));
 sky130_fd_sc_hd__xnor2_2 _1611_ (.A(_0978_),
    .B(_0981_),
    .Y(_0982_));
 sky130_fd_sc_hd__nor2_2 _1612_ (.A(_0965_),
    .B(_0982_),
    .Y(_0983_));
 sky130_fd_sc_hd__a221o_2 _1613_ (.A1(_0453_),
    .A2(initial_freq[11]),
    .B1(_0967_),
    .B2(\lf_inst.integrator[11] ),
    .C1(_0983_),
    .X(_0048_));
 sky130_fd_sc_hd__xnor2_2 _1614_ (.A(\lf_inst.integrator[12] ),
    .B(_0970_),
    .Y(_0984_));
 sky130_fd_sc_hd__a211oi_2 _1615_ (.A1(_0962_),
    .A2(_0973_),
    .B1(_0980_),
    .C1(_0972_),
    .Y(_0985_));
 sky130_fd_sc_hd__nor2_2 _1616_ (.A(_0979_),
    .B(_0985_),
    .Y(_0986_));
 sky130_fd_sc_hd__xnor2_2 _1617_ (.A(_0984_),
    .B(_0986_),
    .Y(_0987_));
 sky130_fd_sc_hd__and2_2 _1618_ (.A(_0453_),
    .B(initial_freq[12]),
    .X(_0988_));
 sky130_fd_sc_hd__a221o_2 _1619_ (.A1(\lf_inst.integrator[12] ),
    .A2(_0967_),
    .B1(_0987_),
    .B2(_0964_),
    .C1(_0988_),
    .X(_0049_));
 sky130_fd_sc_hd__mux2_1 _1620_ (.A0(\lf_inst.error_in[1] ),
    .A1(\lf_inst.error_in[0] ),
    .S(\dynamic_ki[2] ),
    .X(_0989_));
 sky130_fd_sc_hd__xnor2_2 _1621_ (.A(\lf_inst.integrator[13] ),
    .B(_0989_),
    .Y(_0990_));
 sky130_fd_sc_hd__o32a_2 _1622_ (.A1(_0979_),
    .A2(_0984_),
    .A3(_0985_),
    .B1(_0971_),
    .B2(_0457_),
    .X(_0991_));
 sky130_fd_sc_hd__xnor2_2 _1623_ (.A(_0990_),
    .B(_0991_),
    .Y(_0992_));
 sky130_fd_sc_hd__nor2_2 _1624_ (.A(_0965_),
    .B(_0992_),
    .Y(_0993_));
 sky130_fd_sc_hd__and2_2 _1625_ (.A(_0453_),
    .B(initial_freq[13]),
    .X(_0994_));
 sky130_fd_sc_hd__a211o_2 _1626_ (.A1(\lf_inst.integrator[13] ),
    .A2(_0967_),
    .B1(_0993_),
    .C1(_0994_),
    .X(_0050_));
 sky130_fd_sc_hd__nor2_2 _1627_ (.A(\lf_inst.error_in[1] ),
    .B(\lf_inst.integrator[14] ),
    .Y(_0995_));
 sky130_fd_sc_hd__nand2_2 _1628_ (.A(\lf_inst.error_in[1] ),
    .B(\lf_inst.integrator[14] ),
    .Y(_0996_));
 sky130_fd_sc_hd__and2b_2 _1629_ (.A_N(_0995_),
    .B(_0996_),
    .X(_0997_));
 sky130_fd_sc_hd__or2_2 _1630_ (.A(_0984_),
    .B(_0990_),
    .X(_0998_));
 sky130_fd_sc_hd__a22o_2 _1631_ (.A1(\lf_inst.integrator[12] ),
    .A2(_0970_),
    .B1(_0989_),
    .B2(\lf_inst.integrator[13] ),
    .X(_0999_));
 sky130_fd_sc_hd__inv_2 _1632_ (.A(_0999_),
    .Y(_1000_));
 sky130_fd_sc_hd__o31a_2 _1633_ (.A1(_0979_),
    .A2(_0985_),
    .A3(_0998_),
    .B1(_1000_),
    .X(_1001_));
 sky130_fd_sc_hd__xnor2_2 _1634_ (.A(_0997_),
    .B(_1001_),
    .Y(_1002_));
 sky130_fd_sc_hd__and2_2 _1635_ (.A(_0453_),
    .B(initial_freq[14]),
    .X(_1003_));
 sky130_fd_sc_hd__a221o_2 _1636_ (.A1(\lf_inst.integrator[14] ),
    .A2(_0967_),
    .B1(_1002_),
    .B2(_0964_),
    .C1(_1003_),
    .X(_0051_));
 sky130_fd_sc_hd__xor2_2 _1637_ (.A(\lf_inst.error_in[1] ),
    .B(\lf_inst.integrator[15] ),
    .X(_1004_));
 sky130_fd_sc_hd__o21a_2 _1638_ (.A1(_0995_),
    .A2(_1001_),
    .B1(_0996_),
    .X(_1005_));
 sky130_fd_sc_hd__xnor2_2 _1639_ (.A(_1004_),
    .B(_1005_),
    .Y(_1006_));
 sky130_fd_sc_hd__and2_2 _1640_ (.A(_0453_),
    .B(initial_freq[15]),
    .X(_1007_));
 sky130_fd_sc_hd__a221o_2 _1641_ (.A1(\lf_inst.integrator[15] ),
    .A2(_0967_),
    .B1(_1006_),
    .B2(_0964_),
    .C1(_1007_),
    .X(_0052_));
 sky130_fd_sc_hd__o21a_2 _1642_ (.A1(\lf_inst.integrator[14] ),
    .A2(\lf_inst.integrator[15] ),
    .B1(\lf_inst.error_in[1] ),
    .X(_1008_));
 sky130_fd_sc_hd__or4bb_2 _1643_ (.A(_0984_),
    .B(_0990_),
    .C_N(_0997_),
    .D_N(_1004_),
    .X(_1009_));
 sky130_fd_sc_hd__or3_2 _1644_ (.A(_0979_),
    .B(_0985_),
    .C(_1009_),
    .X(_1010_));
 sky130_fd_sc_hd__a31oi_2 _1645_ (.A1(_0997_),
    .A2(_0999_),
    .A3(_1004_),
    .B1(_1008_),
    .Y(_1011_));
 sky130_fd_sc_hd__or2_2 _1646_ (.A(\lf_inst.error_in[1] ),
    .B(\lf_inst.integrator[16] ),
    .X(_1012_));
 sky130_fd_sc_hd__nand2_2 _1647_ (.A(\lf_inst.error_in[1] ),
    .B(\lf_inst.integrator[16] ),
    .Y(_1013_));
 sky130_fd_sc_hd__nand2_2 _1648_ (.A(_1012_),
    .B(_1013_),
    .Y(_1014_));
 sky130_fd_sc_hd__a21o_2 _1649_ (.A1(_1010_),
    .A2(_1011_),
    .B1(_1014_),
    .X(_1015_));
 sky130_fd_sc_hd__nand3_2 _1650_ (.A(_1010_),
    .B(_1011_),
    .C(_1014_),
    .Y(_1016_));
 sky130_fd_sc_hd__nand2_2 _1651_ (.A(_1015_),
    .B(_1016_),
    .Y(_1017_));
 sky130_fd_sc_hd__nand2_2 _1652_ (.A(_0964_),
    .B(_1017_),
    .Y(_1018_));
 sky130_fd_sc_hd__or2_2 _1653_ (.A(rst_n),
    .B(initial_freq[16]),
    .X(_1019_));
 sky130_fd_sc_hd__o211a_2 _1654_ (.A1(\lf_inst.integrator[16] ),
    .A2(_0968_),
    .B1(_1018_),
    .C1(_1019_),
    .X(_0053_));
 sky130_fd_sc_hd__xnor2_2 _1655_ (.A(\lf_inst.error_in[1] ),
    .B(\lf_inst.integrator[17] ),
    .Y(_1020_));
 sky130_fd_sc_hd__nand3b_2 _1656_ (.A_N(_1020_),
    .B(_1015_),
    .C(_1013_),
    .Y(_1021_));
 sky130_fd_sc_hd__a21bo_2 _1657_ (.A1(_1013_),
    .A2(_1015_),
    .B1_N(_1020_),
    .X(_1022_));
 sky130_fd_sc_hd__nand2_2 _1658_ (.A(_1021_),
    .B(_1022_),
    .Y(_1023_));
 sky130_fd_sc_hd__and2_2 _1659_ (.A(_0453_),
    .B(initial_freq[17]),
    .X(_1024_));
 sky130_fd_sc_hd__a221o_2 _1660_ (.A1(\lf_inst.integrator[17] ),
    .A2(_0967_),
    .B1(_1023_),
    .B2(_0964_),
    .C1(_1024_),
    .X(_0054_));
 sky130_fd_sc_hd__or2_2 _1661_ (.A(\lf_inst.error_in[1] ),
    .B(\lf_inst.integrator[18] ),
    .X(_1025_));
 sky130_fd_sc_hd__nand2_2 _1662_ (.A(\lf_inst.error_in[1] ),
    .B(\lf_inst.integrator[18] ),
    .Y(_1026_));
 sky130_fd_sc_hd__nand2_2 _1663_ (.A(_1025_),
    .B(_1026_),
    .Y(_1027_));
 sky130_fd_sc_hd__a211o_2 _1664_ (.A1(_1010_),
    .A2(_1011_),
    .B1(_1014_),
    .C1(_1020_),
    .X(_1028_));
 sky130_fd_sc_hd__o21ai_2 _1665_ (.A1(\lf_inst.integrator[16] ),
    .A2(\lf_inst.integrator[17] ),
    .B1(\lf_inst.error_in[1] ),
    .Y(_1029_));
 sky130_fd_sc_hd__a21o_2 _1666_ (.A1(_1028_),
    .A2(_1029_),
    .B1(_1027_),
    .X(_1030_));
 sky130_fd_sc_hd__nand3_2 _1667_ (.A(_1027_),
    .B(_1028_),
    .C(_1029_),
    .Y(_0147_));
 sky130_fd_sc_hd__nand2_2 _1668_ (.A(_1030_),
    .B(_0147_),
    .Y(_0148_));
 sky130_fd_sc_hd__nor2_2 _1669_ (.A(_0965_),
    .B(_0148_),
    .Y(_0149_));
 sky130_fd_sc_hd__and2_2 _1670_ (.A(_0453_),
    .B(initial_freq[18]),
    .X(_0150_));
 sky130_fd_sc_hd__a211o_2 _1671_ (.A1(\lf_inst.integrator[18] ),
    .A2(_0967_),
    .B1(_0149_),
    .C1(_0150_),
    .X(_0055_));
 sky130_fd_sc_hd__nand2_2 _1672_ (.A(\lf_inst.error_in[1] ),
    .B(\lf_inst.integrator[19] ),
    .Y(_0151_));
 sky130_fd_sc_hd__or2_2 _1673_ (.A(\lf_inst.error_in[1] ),
    .B(\lf_inst.integrator[19] ),
    .X(_0152_));
 sky130_fd_sc_hd__nand2_2 _1674_ (.A(_0151_),
    .B(_0152_),
    .Y(_0153_));
 sky130_fd_sc_hd__inv_2 _1675_ (.A(_0153_),
    .Y(_0154_));
 sky130_fd_sc_hd__nand3_2 _1676_ (.A(_1026_),
    .B(_1030_),
    .C(_0153_),
    .Y(_0155_));
 sky130_fd_sc_hd__a21o_2 _1677_ (.A1(_1026_),
    .A2(_1030_),
    .B1(_0153_),
    .X(_0156_));
 sky130_fd_sc_hd__and2_2 _1678_ (.A(_0453_),
    .B(initial_freq[19]),
    .X(_0157_));
 sky130_fd_sc_hd__a31o_2 _1679_ (.A1(_0964_),
    .A2(_0155_),
    .A3(_0156_),
    .B1(_0157_),
    .X(_0158_));
 sky130_fd_sc_hd__a21o_2 _1680_ (.A1(\lf_inst.integrator[19] ),
    .A2(_0967_),
    .B1(_0158_),
    .X(_0056_));
 sky130_fd_sc_hd__nor2_2 _1681_ (.A(\lf_inst.error_in[1] ),
    .B(\lf_inst.integrator[20] ),
    .Y(_0159_));
 sky130_fd_sc_hd__and2_2 _1682_ (.A(\lf_inst.error_in[1] ),
    .B(\lf_inst.integrator[20] ),
    .X(_0160_));
 sky130_fd_sc_hd__nor2_2 _1683_ (.A(_0159_),
    .B(_0160_),
    .Y(_0161_));
 sky130_fd_sc_hd__a2111oi_2 _1684_ (.A1(_1010_),
    .A2(_1011_),
    .B1(_1014_),
    .C1(_1020_),
    .D1(_1027_),
    .Y(_0162_));
 sky130_fd_sc_hd__nand3_2 _1685_ (.A(_1026_),
    .B(_1029_),
    .C(_0151_),
    .Y(_0163_));
 sky130_fd_sc_hd__a21o_2 _1686_ (.A1(_0154_),
    .A2(_0162_),
    .B1(_0163_),
    .X(_0164_));
 sky130_fd_sc_hd__xnor2_2 _1687_ (.A(_0161_),
    .B(_0164_),
    .Y(_0165_));
 sky130_fd_sc_hd__inv_2 _1688_ (.A(_0165_),
    .Y(_0166_));
 sky130_fd_sc_hd__and2_2 _1689_ (.A(_0453_),
    .B(initial_freq[20]),
    .X(_0167_));
 sky130_fd_sc_hd__a221o_2 _1690_ (.A1(\lf_inst.integrator[20] ),
    .A2(_0967_),
    .B1(_0166_),
    .B2(_0964_),
    .C1(_0167_),
    .X(_0057_));
 sky130_fd_sc_hd__xor2_2 _1691_ (.A(\lf_inst.error_in[1] ),
    .B(\lf_inst.integrator[21] ),
    .X(_0168_));
 sky130_fd_sc_hd__a21o_2 _1692_ (.A1(_0161_),
    .A2(_0164_),
    .B1(_0160_),
    .X(_0169_));
 sky130_fd_sc_hd__xnor2_2 _1693_ (.A(_0168_),
    .B(_0169_),
    .Y(_0170_));
 sky130_fd_sc_hd__nor2_2 _1694_ (.A(_0965_),
    .B(_0170_),
    .Y(_0171_));
 sky130_fd_sc_hd__and2_2 _1695_ (.A(_0453_),
    .B(initial_freq[21]),
    .X(_0172_));
 sky130_fd_sc_hd__a211o_2 _1696_ (.A1(\lf_inst.integrator[21] ),
    .A2(_0967_),
    .B1(_0171_),
    .C1(_0172_),
    .X(_0058_));
 sky130_fd_sc_hd__nor2_2 _1697_ (.A(\lf_inst.error_in[1] ),
    .B(\lf_inst.integrator[22] ),
    .Y(_0173_));
 sky130_fd_sc_hd__and2_2 _1698_ (.A(\lf_inst.error_in[1] ),
    .B(\lf_inst.integrator[22] ),
    .X(_0174_));
 sky130_fd_sc_hd__nor2_2 _1699_ (.A(_0173_),
    .B(_0174_),
    .Y(_0175_));
 sky130_fd_sc_hd__o21a_2 _1700_ (.A1(\lf_inst.integrator[20] ),
    .A2(\lf_inst.integrator[21] ),
    .B1(\lf_inst.error_in[1] ),
    .X(_0176_));
 sky130_fd_sc_hd__a31o_2 _1701_ (.A1(_0161_),
    .A2(_0164_),
    .A3(_0168_),
    .B1(_0176_),
    .X(_0177_));
 sky130_fd_sc_hd__xnor2_2 _1702_ (.A(_0175_),
    .B(_0177_),
    .Y(_0178_));
 sky130_fd_sc_hd__inv_2 _1703_ (.A(_0178_),
    .Y(_0179_));
 sky130_fd_sc_hd__and2_2 _1704_ (.A(_0453_),
    .B(initial_freq[22]),
    .X(_0180_));
 sky130_fd_sc_hd__nor2_2 _1705_ (.A(_0967_),
    .B(_0180_),
    .Y(_0181_));
 sky130_fd_sc_hd__a221o_2 _1706_ (.A1(\lf_inst.integrator[22] ),
    .A2(_0967_),
    .B1(_0179_),
    .B2(_0964_),
    .C1(_0180_),
    .X(_0059_));
 sky130_fd_sc_hd__xor2_2 _1707_ (.A(\lf_inst.error_in[1] ),
    .B(\lf_inst.integrator[23] ),
    .X(_0182_));
 sky130_fd_sc_hd__a21o_2 _1708_ (.A1(_0175_),
    .A2(_0177_),
    .B1(_0174_),
    .X(_0183_));
 sky130_fd_sc_hd__xnor2_2 _1709_ (.A(_0182_),
    .B(_0183_),
    .Y(_0184_));
 sky130_fd_sc_hd__nor2_2 _1710_ (.A(_0965_),
    .B(_0184_),
    .Y(_0185_));
 sky130_fd_sc_hd__and2_2 _1711_ (.A(_0453_),
    .B(initial_freq[23]),
    .X(_0186_));
 sky130_fd_sc_hd__a211o_2 _1712_ (.A1(\lf_inst.integrator[23] ),
    .A2(_0967_),
    .B1(_0185_),
    .C1(_0186_),
    .X(_0060_));
 sky130_fd_sc_hd__xnor2_2 _1713_ (.A(\lf_inst.error_in[1] ),
    .B(\lf_inst.integrator[24] ),
    .Y(_0187_));
 sky130_fd_sc_hd__inv_2 _1714_ (.A(_0187_),
    .Y(_0188_));
 sky130_fd_sc_hd__and2_2 _1715_ (.A(_0175_),
    .B(_0182_),
    .X(_0189_));
 sky130_fd_sc_hd__inv_2 _1716_ (.A(_0189_),
    .Y(_0190_));
 sky130_fd_sc_hd__and3_2 _1717_ (.A(_0161_),
    .B(_0168_),
    .C(_0189_),
    .X(_0191_));
 sky130_fd_sc_hd__a211o_2 _1718_ (.A1(\lf_inst.error_in[1] ),
    .A2(\lf_inst.integrator[23] ),
    .B1(_0174_),
    .C1(_0176_),
    .X(_0192_));
 sky130_fd_sc_hd__a31o_2 _1719_ (.A1(_0154_),
    .A2(_0162_),
    .A3(_0191_),
    .B1(_0192_),
    .X(_0193_));
 sky130_fd_sc_hd__nor2_2 _1720_ (.A(_0163_),
    .B(_0193_),
    .Y(_0194_));
 sky130_fd_sc_hd__xnor2_2 _1721_ (.A(_0187_),
    .B(_0194_),
    .Y(_0195_));
 sky130_fd_sc_hd__nand2_2 _1722_ (.A(_0964_),
    .B(_0195_),
    .Y(_0196_));
 sky130_fd_sc_hd__o221a_2 _1723_ (.A1(rst_n),
    .A2(initial_freq[24]),
    .B1(_0968_),
    .B2(\lf_inst.integrator[24] ),
    .C1(_0196_),
    .X(_0061_));
 sky130_fd_sc_hd__xor2_2 _1724_ (.A(\lf_inst.error_in[1] ),
    .B(\lf_inst.integrator[25] ),
    .X(_0197_));
 sky130_fd_sc_hd__a2bb2o_2 _1725_ (.A1_N(_0187_),
    .A2_N(_0194_),
    .B1(\lf_inst.error_in[1] ),
    .B2(\lf_inst.integrator[24] ),
    .X(_0198_));
 sky130_fd_sc_hd__xnor2_2 _1726_ (.A(_0197_),
    .B(_0198_),
    .Y(_0199_));
 sky130_fd_sc_hd__nor2_2 _1727_ (.A(_0965_),
    .B(_0199_),
    .Y(_0200_));
 sky130_fd_sc_hd__and2_2 _1728_ (.A(_0453_),
    .B(initial_freq[25]),
    .X(_0201_));
 sky130_fd_sc_hd__a211o_2 _1729_ (.A1(\lf_inst.integrator[25] ),
    .A2(_0967_),
    .B1(_0200_),
    .C1(_0201_),
    .X(_0062_));
 sky130_fd_sc_hd__xor2_2 _1730_ (.A(\lf_inst.error_in[1] ),
    .B(\lf_inst.integrator[26] ),
    .X(_0202_));
 sky130_fd_sc_hd__o211a_2 _1731_ (.A1(_0163_),
    .A2(_0193_),
    .B1(_0197_),
    .C1(_0188_),
    .X(_0203_));
 sky130_fd_sc_hd__o21a_2 _1732_ (.A1(\lf_inst.integrator[24] ),
    .A2(\lf_inst.integrator[25] ),
    .B1(\lf_inst.error_in[1] ),
    .X(_0204_));
 sky130_fd_sc_hd__o21ai_2 _1733_ (.A1(_0203_),
    .A2(_0204_),
    .B1(_0202_),
    .Y(_0205_));
 sky130_fd_sc_hd__or3_2 _1734_ (.A(_0202_),
    .B(_0203_),
    .C(_0204_),
    .X(_0206_));
 sky130_fd_sc_hd__nand2_2 _1735_ (.A(_0205_),
    .B(_0206_),
    .Y(_0207_));
 sky130_fd_sc_hd__nor2_2 _1736_ (.A(_0965_),
    .B(_0207_),
    .Y(_0208_));
 sky130_fd_sc_hd__and2_2 _1737_ (.A(_0453_),
    .B(initial_freq[26]),
    .X(_0209_));
 sky130_fd_sc_hd__a211o_2 _1738_ (.A1(\lf_inst.integrator[26] ),
    .A2(_0967_),
    .B1(_0208_),
    .C1(_0209_),
    .X(_0063_));
 sky130_fd_sc_hd__xor2_2 _1739_ (.A(\lf_inst.error_in[1] ),
    .B(\lf_inst.integrator[27] ),
    .X(_0210_));
 sky130_fd_sc_hd__a21bo_2 _1740_ (.A1(\lf_inst.error_in[1] ),
    .A2(\lf_inst.integrator[26] ),
    .B1_N(_0205_),
    .X(_0211_));
 sky130_fd_sc_hd__xor2_2 _1741_ (.A(_0210_),
    .B(_0211_),
    .X(_0212_));
 sky130_fd_sc_hd__and2_2 _1742_ (.A(_0453_),
    .B(initial_freq[27]),
    .X(_0213_));
 sky130_fd_sc_hd__a221o_2 _1743_ (.A1(\lf_inst.integrator[27] ),
    .A2(_0967_),
    .B1(_0212_),
    .B2(_0964_),
    .C1(_0213_),
    .X(_0064_));
 sky130_fd_sc_hd__or2_2 _1744_ (.A(\lf_inst.error_in[1] ),
    .B(\lf_inst.integrator[28] ),
    .X(_0214_));
 sky130_fd_sc_hd__nand2_2 _1745_ (.A(\lf_inst.error_in[1] ),
    .B(\lf_inst.integrator[28] ),
    .Y(_0215_));
 sky130_fd_sc_hd__and2_2 _1746_ (.A(_0214_),
    .B(_0215_),
    .X(_0216_));
 sky130_fd_sc_hd__o41a_2 _1747_ (.A1(\lf_inst.integrator[24] ),
    .A2(\lf_inst.integrator[25] ),
    .A3(\lf_inst.integrator[26] ),
    .A4(\lf_inst.integrator[27] ),
    .B1(\lf_inst.error_in[1] ),
    .X(_0217_));
 sky130_fd_sc_hd__a31o_2 _1748_ (.A1(_0202_),
    .A2(_0203_),
    .A3(_0210_),
    .B1(_0217_),
    .X(_0218_));
 sky130_fd_sc_hd__nand2_2 _1749_ (.A(_0216_),
    .B(_0218_),
    .Y(_0219_));
 sky130_fd_sc_hd__xnor2_2 _1750_ (.A(_0216_),
    .B(_0218_),
    .Y(_0220_));
 sky130_fd_sc_hd__inv_2 _1751_ (.A(_0220_),
    .Y(_0221_));
 sky130_fd_sc_hd__and2_2 _1752_ (.A(_0453_),
    .B(initial_freq[28]),
    .X(_0222_));
 sky130_fd_sc_hd__a221o_2 _1753_ (.A1(\lf_inst.integrator[28] ),
    .A2(_0967_),
    .B1(_0221_),
    .B2(_0964_),
    .C1(_0222_),
    .X(_0065_));
 sky130_fd_sc_hd__or2_2 _1754_ (.A(\lf_inst.error_in[1] ),
    .B(\lf_inst.integrator[29] ),
    .X(_0223_));
 sky130_fd_sc_hd__nand2_2 _1755_ (.A(\lf_inst.error_in[1] ),
    .B(\lf_inst.integrator[29] ),
    .Y(_0224_));
 sky130_fd_sc_hd__nand2_2 _1756_ (.A(_0223_),
    .B(_0224_),
    .Y(_0225_));
 sky130_fd_sc_hd__nand2_2 _1757_ (.A(_0215_),
    .B(_0219_),
    .Y(_0226_));
 sky130_fd_sc_hd__xnor2_2 _1758_ (.A(_0225_),
    .B(_0226_),
    .Y(_0227_));
 sky130_fd_sc_hd__and2_2 _1759_ (.A(_0453_),
    .B(initial_freq[29]),
    .X(_0228_));
 sky130_fd_sc_hd__a221o_2 _1760_ (.A1(\lf_inst.integrator[29] ),
    .A2(_0967_),
    .B1(_0227_),
    .B2(_0964_),
    .C1(_0228_),
    .X(_0066_));
 sky130_fd_sc_hd__o211a_2 _1761_ (.A1(_0219_),
    .A2(_0225_),
    .B1(_0224_),
    .C1(_0215_),
    .X(_0229_));
 sky130_fd_sc_hd__nand2_2 _1762_ (.A(\lf_inst.error_in[1] ),
    .B(\lf_inst.integrator[30] ),
    .Y(_0230_));
 sky130_fd_sc_hd__or2_2 _1763_ (.A(\lf_inst.error_in[1] ),
    .B(\lf_inst.integrator[30] ),
    .X(_0231_));
 sky130_fd_sc_hd__nand2_2 _1764_ (.A(_0230_),
    .B(_0231_),
    .Y(_0232_));
 sky130_fd_sc_hd__xor2_2 _1765_ (.A(_0229_),
    .B(_0232_),
    .X(_0233_));
 sky130_fd_sc_hd__and2_2 _1766_ (.A(_0453_),
    .B(initial_freq[30]),
    .X(_0234_));
 sky130_fd_sc_hd__a221o_2 _1767_ (.A1(\lf_inst.integrator[30] ),
    .A2(_0967_),
    .B1(_0233_),
    .B2(_0964_),
    .C1(_0234_),
    .X(_0067_));
 sky130_fd_sc_hd__o21a_2 _1768_ (.A1(_0229_),
    .A2(_0232_),
    .B1(_0230_),
    .X(_0235_));
 sky130_fd_sc_hd__xnor2_2 _1769_ (.A(\lf_inst.integrator[31] ),
    .B(_0235_),
    .Y(_0236_));
 sky130_fd_sc_hd__nand2_2 _1770_ (.A(\lf_inst.error_in[1] ),
    .B(_0236_),
    .Y(_0237_));
 sky130_fd_sc_hd__o21a_2 _1771_ (.A1(\lf_inst.error_in[1] ),
    .A2(_0236_),
    .B1(_0964_),
    .X(_0238_));
 sky130_fd_sc_hd__and2_2 _1772_ (.A(_0453_),
    .B(initial_freq[31]),
    .X(_0239_));
 sky130_fd_sc_hd__a221o_2 _1773_ (.A1(\lf_inst.integrator[31] ),
    .A2(_0967_),
    .B1(_0237_),
    .B2(_0238_),
    .C1(_0239_),
    .X(_0068_));
 sky130_fd_sc_hd__nor2_2 _1774_ (.A(lock_detect),
    .B(_0453_),
    .Y(_0240_));
 sky130_fd_sc_hd__and2_2 _1775_ (.A(_0452_),
    .B(\unlock_timer[0] ),
    .X(_0241_));
 sky130_fd_sc_hd__o21ai_2 _1776_ (.A1(_0452_),
    .A2(\unlock_timer[0] ),
    .B1(_0240_),
    .Y(_0242_));
 sky130_fd_sc_hd__nor2_2 _1777_ (.A(_0241_),
    .B(_0242_),
    .Y(_0070_));
 sky130_fd_sc_hd__a21boi_2 _1778_ (.A1(\unlock_timer[1] ),
    .A2(_0241_),
    .B1_N(_0240_),
    .Y(_0243_));
 sky130_fd_sc_hd__o21a_2 _1779_ (.A1(\unlock_timer[1] ),
    .A2(_0241_),
    .B1(_0243_),
    .X(_0071_));
 sky130_fd_sc_hd__a31o_2 _1780_ (.A1(_0452_),
    .A2(\unlock_timer[1] ),
    .A3(\unlock_timer[0] ),
    .B1(\unlock_timer[2] ),
    .X(_0244_));
 sky130_fd_sc_hd__and3_2 _1781_ (.A(\unlock_timer[2] ),
    .B(\unlock_timer[1] ),
    .C(_0241_),
    .X(_0245_));
 sky130_fd_sc_hd__and3b_2 _1782_ (.A_N(_0245_),
    .B(_0240_),
    .C(_0244_),
    .X(_0072_));
 sky130_fd_sc_hd__and2_2 _1783_ (.A(\unlock_timer[3] ),
    .B(_0245_),
    .X(_0246_));
 sky130_fd_sc_hd__o21ai_2 _1784_ (.A1(\unlock_timer[3] ),
    .A2(_0245_),
    .B1(_0240_),
    .Y(_0247_));
 sky130_fd_sc_hd__nor2_2 _1785_ (.A(_0246_),
    .B(_0247_),
    .Y(_0073_));
 sky130_fd_sc_hd__o21ai_2 _1786_ (.A1(\unlock_timer[4] ),
    .A2(_0246_),
    .B1(_0240_),
    .Y(_0248_));
 sky130_fd_sc_hd__a21oi_2 _1787_ (.A1(\unlock_timer[4] ),
    .A2(_0246_),
    .B1(_0248_),
    .Y(_0074_));
 sky130_fd_sc_hd__and3_2 _1788_ (.A(\unlock_timer[4] ),
    .B(\unlock_timer[3] ),
    .C(\unlock_timer[2] ),
    .X(_0249_));
 sky130_fd_sc_hd__a31o_2 _1789_ (.A1(\unlock_timer[1] ),
    .A2(\unlock_timer[0] ),
    .A3(_0249_),
    .B1(\unlock_timer[5] ),
    .X(_0250_));
 sky130_fd_sc_hd__and2_2 _1790_ (.A(_0240_),
    .B(_0250_),
    .X(_0075_));
 sky130_fd_sc_hd__and2b_2 _1791_ (.A_N(\pfd_inst.state[0] ),
    .B(\lf_inst.error_in[0] ),
    .X(_0251_));
 sky130_fd_sc_hd__o31a_2 _1792_ (.A1(\pfd_inst.state[1] ),
    .A2(\pfd_inst.state[2] ),
    .A3(_0251_),
    .B1(rst_n),
    .X(_0076_));
 sky130_fd_sc_hd__or3b_2 _1793_ (.A(\pfd_inst.state[0] ),
    .B(\pfd_inst.state[2] ),
    .C_N(\lf_inst.error_in[1] ),
    .X(_0252_));
 sky130_fd_sc_hd__a21oi_2 _1794_ (.A1(_0455_),
    .A2(_0252_),
    .B1(_0453_),
    .Y(_0077_));
 sky130_fd_sc_hd__o21ai_2 _1795_ (.A1(\lf_inst.zero_error_count[3] ),
    .A2(\lf_inst.zero_error_count[2] ),
    .B1(\lf_inst.zero_error_count[4] ),
    .Y(_0253_));
 sky130_fd_sc_hd__nand2_2 _1796_ (.A(\lf_inst.sample_en ),
    .B(_0253_),
    .Y(_0254_));
 sky130_fd_sc_hd__o21ai_2 _1797_ (.A1(\lf_inst.error_in[1] ),
    .A2(\lf_inst.error_in[0] ),
    .B1(\lf_inst.sample_en ),
    .Y(_0255_));
 sky130_fd_sc_hd__and2_2 _1798_ (.A(_0254_),
    .B(_0255_),
    .X(_0256_));
 sky130_fd_sc_hd__nor3_2 _1799_ (.A(\lf_inst.error_in[1] ),
    .B(\lf_inst.error_in[0] ),
    .C(_0254_),
    .Y(_0257_));
 sky130_fd_sc_hd__mux2_1 _1800_ (.A0(_0257_),
    .A1(_0256_),
    .S(\lf_inst.zero_error_count[0] ),
    .X(_0258_));
 sky130_fd_sc_hd__and2_2 _1801_ (.A(rst_n),
    .B(_0258_),
    .X(_0078_));
 sky130_fd_sc_hd__nand2_2 _1802_ (.A(\lf_inst.zero_error_count[1] ),
    .B(\lf_inst.zero_error_count[0] ),
    .Y(_0259_));
 sky130_fd_sc_hd__a22o_2 _1803_ (.A1(\lf_inst.zero_error_count[1] ),
    .A2(_0256_),
    .B1(_0257_),
    .B2(_0259_),
    .X(_0260_));
 sky130_fd_sc_hd__o211a_2 _1804_ (.A1(\lf_inst.zero_error_count[1] ),
    .A2(\lf_inst.zero_error_count[0] ),
    .B1(rst_n),
    .C1(_0260_),
    .X(_0079_));
 sky130_fd_sc_hd__and3_2 _1805_ (.A(\lf_inst.zero_error_count[2] ),
    .B(\lf_inst.zero_error_count[1] ),
    .C(\lf_inst.zero_error_count[0] ),
    .X(_0261_));
 sky130_fd_sc_hd__inv_2 _1806_ (.A(_0261_),
    .Y(_0262_));
 sky130_fd_sc_hd__a22o_2 _1807_ (.A1(\lf_inst.zero_error_count[2] ),
    .A2(_0256_),
    .B1(_0257_),
    .B2(_0262_),
    .X(_0263_));
 sky130_fd_sc_hd__a21o_2 _1808_ (.A1(\lf_inst.zero_error_count[1] ),
    .A2(\lf_inst.zero_error_count[0] ),
    .B1(\lf_inst.zero_error_count[2] ),
    .X(_0264_));
 sky130_fd_sc_hd__and3_2 _1809_ (.A(rst_n),
    .B(_0263_),
    .C(_0264_),
    .X(_0080_));
 sky130_fd_sc_hd__a21o_2 _1810_ (.A1(_0257_),
    .A2(_0261_),
    .B1(\lf_inst.zero_error_count[3] ),
    .X(_0265_));
 sky130_fd_sc_hd__and2_2 _1811_ (.A(rst_n),
    .B(_0255_),
    .X(_0266_));
 sky130_fd_sc_hd__o311a_2 _1812_ (.A1(_0451_),
    .A2(_0254_),
    .A3(_0262_),
    .B1(_0265_),
    .C1(_0266_),
    .X(_0081_));
 sky130_fd_sc_hd__a31o_2 _1813_ (.A1(\lf_inst.zero_error_count[3] ),
    .A2(\lf_inst.sample_en ),
    .A3(_0261_),
    .B1(\lf_inst.zero_error_count[4] ),
    .X(_0267_));
 sky130_fd_sc_hd__and2_2 _1814_ (.A(_0266_),
    .B(_0267_),
    .X(_0082_));
 sky130_fd_sc_hd__nor3b_2 _1815_ (.A(\dynamic_ki[2] ),
    .B(\dynamic_kp[2] ),
    .C_N(\lf_inst.error_in[0] ),
    .Y(_0268_));
 sky130_fd_sc_hd__a21oi_2 _1816_ (.A1(rst_n),
    .A2(_0268_),
    .B1(_0037_),
    .Y(_0269_));
 sky130_fd_sc_hd__a31o_2 _1817_ (.A1(rst_n),
    .A2(\lf_inst.integrator[1] ),
    .A3(_0268_),
    .B1(_0967_),
    .X(_0270_));
 sky130_fd_sc_hd__a2bb2o_2 _1818_ (.A1_N(_0269_),
    .A2_N(_0270_),
    .B1(debug_dco_word[1]),
    .B2(_0967_),
    .X(_0083_));
 sky130_fd_sc_hd__nor3b_2 _1819_ (.A(\dynamic_ki[2] ),
    .B(\dynamic_kp[2] ),
    .C_N(\lf_inst.error_in[1] ),
    .Y(_0271_));
 sky130_fd_sc_hd__or3b_2 _1820_ (.A(\dynamic_ki[2] ),
    .B(\dynamic_kp[2] ),
    .C_N(\lf_inst.error_in[1] ),
    .X(_0272_));
 sky130_fd_sc_hd__nand2_2 _1821_ (.A(\lf_inst.integrator[2] ),
    .B(_0271_),
    .Y(_0273_));
 sky130_fd_sc_hd__nor2_2 _1822_ (.A(\lf_inst.integrator[2] ),
    .B(_0271_),
    .Y(_0274_));
 sky130_fd_sc_hd__or2_2 _1823_ (.A(\lf_inst.integrator[2] ),
    .B(_0271_),
    .X(_0275_));
 sky130_fd_sc_hd__nand2_2 _1824_ (.A(_0273_),
    .B(_0275_),
    .Y(_0276_));
 sky130_fd_sc_hd__nand2_2 _1825_ (.A(\lf_inst.integrator[1] ),
    .B(_0268_),
    .Y(_0277_));
 sky130_fd_sc_hd__a21oi_2 _1826_ (.A1(_0276_),
    .A2(_0277_),
    .B1(_0965_),
    .Y(_0278_));
 sky130_fd_sc_hd__o21a_2 _1827_ (.A1(_0276_),
    .A2(_0277_),
    .B1(_0278_),
    .X(_0279_));
 sky130_fd_sc_hd__a221o_2 _1828_ (.A1(_0453_),
    .A2(initial_freq[2]),
    .B1(debug_dco_word[2]),
    .B2(_0967_),
    .C1(_0279_),
    .X(_0084_));
 sky130_fd_sc_hd__nand2_2 _1829_ (.A(\lf_inst.integrator[3] ),
    .B(_0271_),
    .Y(_0280_));
 sky130_fd_sc_hd__inv_2 _1830_ (.A(_0280_),
    .Y(_0281_));
 sky130_fd_sc_hd__o21ai_2 _1831_ (.A1(_0274_),
    .A2(_0277_),
    .B1(_0273_),
    .Y(_0282_));
 sky130_fd_sc_hd__nor2_2 _1832_ (.A(\lf_inst.integrator[3] ),
    .B(_0271_),
    .Y(_0283_));
 sky130_fd_sc_hd__or2_2 _1833_ (.A(_0281_),
    .B(_0283_),
    .X(_0284_));
 sky130_fd_sc_hd__xnor2_2 _1834_ (.A(_0282_),
    .B(_0284_),
    .Y(_0285_));
 sky130_fd_sc_hd__a221o_2 _1835_ (.A1(debug_dco_word[3]),
    .A2(_0967_),
    .B1(_0285_),
    .B2(_0964_),
    .C1(_0957_),
    .X(_0085_));
 sky130_fd_sc_hd__or2_2 _1836_ (.A(\lf_inst.integrator[4] ),
    .B(_0271_),
    .X(_0286_));
 sky130_fd_sc_hd__nand2_2 _1837_ (.A(\lf_inst.integrator[4] ),
    .B(_0271_),
    .Y(_0287_));
 sky130_fd_sc_hd__nand2_2 _1838_ (.A(_0286_),
    .B(_0287_),
    .Y(_0288_));
 sky130_fd_sc_hd__o211a_2 _1839_ (.A1(_0274_),
    .A2(_0277_),
    .B1(_0280_),
    .C1(_0273_),
    .X(_0289_));
 sky130_fd_sc_hd__o21ai_2 _1840_ (.A1(_0283_),
    .A2(_0289_),
    .B1(_0288_),
    .Y(_0290_));
 sky130_fd_sc_hd__or3_2 _1841_ (.A(_0283_),
    .B(_0288_),
    .C(_0289_),
    .X(_0291_));
 sky130_fd_sc_hd__a22o_2 _1842_ (.A1(_0453_),
    .A2(initial_freq[4]),
    .B1(debug_dco_word[4]),
    .B2(_0967_),
    .X(_0292_));
 sky130_fd_sc_hd__a31o_2 _1843_ (.A1(_0964_),
    .A2(_0290_),
    .A3(_0291_),
    .B1(_0292_),
    .X(_0086_));
 sky130_fd_sc_hd__xnor2_2 _1844_ (.A(\lf_inst.integrator[5] ),
    .B(_0271_),
    .Y(_0293_));
 sky130_fd_sc_hd__a21o_2 _1845_ (.A1(_0287_),
    .A2(_0291_),
    .B1(_0293_),
    .X(_0294_));
 sky130_fd_sc_hd__a31oi_2 _1846_ (.A1(_0287_),
    .A2(_0291_),
    .A3(_0293_),
    .B1(_0965_),
    .Y(_0295_));
 sky130_fd_sc_hd__a221o_2 _1847_ (.A1(debug_dco_word[5]),
    .A2(_0967_),
    .B1(_0294_),
    .B2(_0295_),
    .C1(_0958_),
    .X(_0087_));
 sky130_fd_sc_hd__xnor2_2 _1848_ (.A(\lf_inst.integrator[6] ),
    .B(_0271_),
    .Y(_0296_));
 sky130_fd_sc_hd__o21ai_2 _1849_ (.A1(\lf_inst.integrator[4] ),
    .A2(\lf_inst.integrator[5] ),
    .B1(_0271_),
    .Y(_0297_));
 sky130_fd_sc_hd__or2_2 _1850_ (.A(_0291_),
    .B(_0293_),
    .X(_0298_));
 sky130_fd_sc_hd__a21oi_2 _1851_ (.A1(_0297_),
    .A2(_0298_),
    .B1(_0296_),
    .Y(_0299_));
 sky130_fd_sc_hd__a31o_2 _1852_ (.A1(_0296_),
    .A2(_0297_),
    .A3(_0298_),
    .B1(_0965_),
    .X(_0300_));
 sky130_fd_sc_hd__nor2_2 _1853_ (.A(_0299_),
    .B(_0300_),
    .Y(_0301_));
 sky130_fd_sc_hd__a211o_2 _1854_ (.A1(debug_dco_word[6]),
    .A2(_0967_),
    .B1(_0301_),
    .C1(_0959_),
    .X(_0088_));
 sky130_fd_sc_hd__xnor2_2 _1855_ (.A(\lf_inst.integrator[7] ),
    .B(_0272_),
    .Y(_0302_));
 sky130_fd_sc_hd__a21oi_2 _1856_ (.A1(\lf_inst.integrator[6] ),
    .A2(_0271_),
    .B1(_0299_),
    .Y(_0303_));
 sky130_fd_sc_hd__xnor2_2 _1857_ (.A(_0302_),
    .B(_0303_),
    .Y(_0304_));
 sky130_fd_sc_hd__a221o_2 _1858_ (.A1(debug_dco_word[7]),
    .A2(_0967_),
    .B1(_0304_),
    .B2(_0964_),
    .C1(_0960_),
    .X(_0089_));
 sky130_fd_sc_hd__or3b_2 _1859_ (.A(_0293_),
    .B(_0296_),
    .C_N(_0302_),
    .X(_0305_));
 sky130_fd_sc_hd__or4_2 _1860_ (.A(_0283_),
    .B(_0288_),
    .C(_0289_),
    .D(_0305_),
    .X(_0306_));
 sky130_fd_sc_hd__o41a_2 _1861_ (.A1(\lf_inst.integrator[4] ),
    .A2(\lf_inst.integrator[5] ),
    .A3(\lf_inst.integrator[6] ),
    .A4(\lf_inst.integrator[7] ),
    .B1(_0271_),
    .X(_0307_));
 sky130_fd_sc_hd__inv_2 _1862_ (.A(_0307_),
    .Y(_0308_));
 sky130_fd_sc_hd__xnor2_2 _1863_ (.A(\lf_inst.integrator[8] ),
    .B(_0271_),
    .Y(_0309_));
 sky130_fd_sc_hd__and3_2 _1864_ (.A(_0306_),
    .B(_0308_),
    .C(_0309_),
    .X(_0310_));
 sky130_fd_sc_hd__a21oi_2 _1865_ (.A1(_0306_),
    .A2(_0308_),
    .B1(_0309_),
    .Y(_0311_));
 sky130_fd_sc_hd__nor2_2 _1866_ (.A(_0310_),
    .B(_0311_),
    .Y(_0312_));
 sky130_fd_sc_hd__a22o_2 _1867_ (.A1(_0453_),
    .A2(initial_freq[8]),
    .B1(debug_dco_word[8]),
    .B2(_0967_),
    .X(_0313_));
 sky130_fd_sc_hd__a21o_2 _1868_ (.A1(_0964_),
    .A2(_0312_),
    .B1(_0313_),
    .X(_0090_));
 sky130_fd_sc_hd__a21oi_2 _1869_ (.A1(\lf_inst.integrator[8] ),
    .A2(_0271_),
    .B1(_0311_),
    .Y(_0314_));
 sky130_fd_sc_hd__nor2_2 _1870_ (.A(_0963_),
    .B(_0272_),
    .Y(_0315_));
 sky130_fd_sc_hd__and2_2 _1871_ (.A(_0963_),
    .B(_0272_),
    .X(_0316_));
 sky130_fd_sc_hd__nor2_2 _1872_ (.A(_0315_),
    .B(_0316_),
    .Y(_0317_));
 sky130_fd_sc_hd__nor2_2 _1873_ (.A(_0314_),
    .B(_0316_),
    .Y(_0318_));
 sky130_fd_sc_hd__xnor2_2 _1874_ (.A(_0314_),
    .B(_0317_),
    .Y(_0319_));
 sky130_fd_sc_hd__a221o_2 _1875_ (.A1(debug_dco_word[9]),
    .A2(_0967_),
    .B1(_0319_),
    .B2(_0964_),
    .C1(_0969_),
    .X(_0091_));
 sky130_fd_sc_hd__xnor2_2 _1876_ (.A(_0975_),
    .B(_0271_),
    .Y(_0320_));
 sky130_fd_sc_hd__or3_2 _1877_ (.A(_0315_),
    .B(_0318_),
    .C(_0320_),
    .X(_0321_));
 sky130_fd_sc_hd__o21a_2 _1878_ (.A1(_0315_),
    .A2(_0318_),
    .B1(_0320_),
    .X(_0322_));
 sky130_fd_sc_hd__nor2_2 _1879_ (.A(_0965_),
    .B(_0322_),
    .Y(_0323_));
 sky130_fd_sc_hd__a221o_2 _1880_ (.A1(debug_dco_word[10]),
    .A2(_0967_),
    .B1(_0321_),
    .B2(_0323_),
    .C1(_0977_),
    .X(_0092_));
 sky130_fd_sc_hd__xnor2_2 _1881_ (.A(_0982_),
    .B(_0271_),
    .Y(_0324_));
 sky130_fd_sc_hd__o21ba_2 _1882_ (.A1(_0975_),
    .A2(_0272_),
    .B1_N(_0322_),
    .X(_0325_));
 sky130_fd_sc_hd__xnor2_2 _1883_ (.A(_0324_),
    .B(_0325_),
    .Y(_0326_));
 sky130_fd_sc_hd__mux2_1 _1884_ (.A0(initial_freq[11]),
    .A1(_0326_),
    .S(rst_n),
    .X(_0327_));
 sky130_fd_sc_hd__mux2_1 _1885_ (.A0(debug_dco_word[11]),
    .A1(_0327_),
    .S(_0968_),
    .X(_0093_));
 sky130_fd_sc_hd__xnor2_2 _1886_ (.A(_0987_),
    .B(_0272_),
    .Y(_0328_));
 sky130_fd_sc_hd__and2_2 _1887_ (.A(_0317_),
    .B(_0320_),
    .X(_0329_));
 sky130_fd_sc_hd__a31o_2 _1888_ (.A1(_0456_),
    .A2(_0963_),
    .A3(_0975_),
    .B1(_0272_),
    .X(_0330_));
 sky130_fd_sc_hd__o21ai_2 _1889_ (.A1(_0982_),
    .A2(_0272_),
    .B1(_0330_),
    .Y(_0331_));
 sky130_fd_sc_hd__a31o_2 _1890_ (.A1(_0311_),
    .A2(_0324_),
    .A3(_0329_),
    .B1(_0331_),
    .X(_0332_));
 sky130_fd_sc_hd__or2_2 _1891_ (.A(_0328_),
    .B(_0332_),
    .X(_0333_));
 sky130_fd_sc_hd__and2_2 _1892_ (.A(_0328_),
    .B(_0332_),
    .X(_0334_));
 sky130_fd_sc_hd__nor2_2 _1893_ (.A(_0965_),
    .B(_0334_),
    .Y(_0335_));
 sky130_fd_sc_hd__a221o_2 _1894_ (.A1(debug_dco_word[12]),
    .A2(_0967_),
    .B1(_0333_),
    .B2(_0335_),
    .C1(_0988_),
    .X(_0094_));
 sky130_fd_sc_hd__a21oi_2 _1895_ (.A1(\dynamic_kp[2] ),
    .A2(_0961_),
    .B1(_0271_),
    .Y(_0336_));
 sky130_fd_sc_hd__xor2_2 _1896_ (.A(_0992_),
    .B(_0336_),
    .X(_0337_));
 sky130_fd_sc_hd__a21oi_2 _1897_ (.A1(_0987_),
    .A2(_0271_),
    .B1(_0334_),
    .Y(_0338_));
 sky130_fd_sc_hd__xnor2_2 _1898_ (.A(_0337_),
    .B(_0338_),
    .Y(_0339_));
 sky130_fd_sc_hd__a221o_2 _1899_ (.A1(debug_dco_word[13]),
    .A2(_0967_),
    .B1(_0339_),
    .B2(_0964_),
    .C1(_0994_),
    .X(_0095_));
 sky130_fd_sc_hd__nand2_2 _1900_ (.A(_0970_),
    .B(_1002_),
    .Y(_0340_));
 sky130_fd_sc_hd__xnor2_2 _1901_ (.A(_0971_),
    .B(_1002_),
    .Y(_0341_));
 sky130_fd_sc_hd__a2bb2o_2 _1902_ (.A1_N(_0992_),
    .A2_N(_0336_),
    .B1(_0271_),
    .B2(_0987_),
    .X(_0342_));
 sky130_fd_sc_hd__a31o_2 _1903_ (.A1(_0328_),
    .A2(_0332_),
    .A3(_0337_),
    .B1(_0342_),
    .X(_0343_));
 sky130_fd_sc_hd__or2_2 _1904_ (.A(_0341_),
    .B(_0343_),
    .X(_0344_));
 sky130_fd_sc_hd__nand2_2 _1905_ (.A(_0341_),
    .B(_0343_),
    .Y(_0345_));
 sky130_fd_sc_hd__a21o_2 _1906_ (.A1(debug_dco_word[14]),
    .A2(_0967_),
    .B1(_1003_),
    .X(_0346_));
 sky130_fd_sc_hd__a31o_2 _1907_ (.A1(_0964_),
    .A2(_0344_),
    .A3(_0345_),
    .B1(_0346_),
    .X(_0096_));
 sky130_fd_sc_hd__xnor2_2 _1908_ (.A(_0970_),
    .B(_1006_),
    .Y(_0347_));
 sky130_fd_sc_hd__a21oi_2 _1909_ (.A1(_0340_),
    .A2(_0345_),
    .B1(_0347_),
    .Y(_0348_));
 sky130_fd_sc_hd__a31o_2 _1910_ (.A1(_0340_),
    .A2(_0345_),
    .A3(_0347_),
    .B1(_0965_),
    .X(_0349_));
 sky130_fd_sc_hd__nor2_2 _1911_ (.A(_0348_),
    .B(_0349_),
    .Y(_0350_));
 sky130_fd_sc_hd__a211o_2 _1912_ (.A1(debug_dco_word[15]),
    .A2(_0967_),
    .B1(_1007_),
    .C1(_0350_),
    .X(_0097_));
 sky130_fd_sc_hd__xnor2_2 _1913_ (.A(_0971_),
    .B(_1017_),
    .Y(_0351_));
 sky130_fd_sc_hd__o211ai_2 _1914_ (.A1(_0970_),
    .A2(_1006_),
    .B1(_0341_),
    .C1(_0342_),
    .Y(_0352_));
 sky130_fd_sc_hd__and4b_2 _1915_ (.A_N(_1009_),
    .B(_0311_),
    .C(_0324_),
    .D(_0329_),
    .X(_0353_));
 sky130_fd_sc_hd__a21o_2 _1916_ (.A1(_0970_),
    .A2(_1002_),
    .B1(_0331_),
    .X(_0354_));
 sky130_fd_sc_hd__a211oi_2 _1917_ (.A1(_0970_),
    .A2(_1006_),
    .B1(_0353_),
    .C1(_0354_),
    .Y(_0355_));
 sky130_fd_sc_hd__and2_2 _1918_ (.A(_0352_),
    .B(_0355_),
    .X(_0356_));
 sky130_fd_sc_hd__xor2_2 _1919_ (.A(_0351_),
    .B(_0356_),
    .X(_0357_));
 sky130_fd_sc_hd__o221a_2 _1920_ (.A1(debug_dco_word[16]),
    .A2(_0968_),
    .B1(_0357_),
    .B2(_0965_),
    .C1(_1019_),
    .X(_0098_));
 sky130_fd_sc_hd__a21bo_2 _1921_ (.A1(\dynamic_kp[2] ),
    .A2(_0971_),
    .B1_N(_0989_),
    .X(_0358_));
 sky130_fd_sc_hd__a21oi_2 _1922_ (.A1(_1021_),
    .A2(_1022_),
    .B1(_0358_),
    .Y(_0359_));
 sky130_fd_sc_hd__and3_2 _1923_ (.A(_1021_),
    .B(_1022_),
    .C(_0358_),
    .X(_0360_));
 sky130_fd_sc_hd__nor2_2 _1924_ (.A(_0359_),
    .B(_0360_),
    .Y(_0361_));
 sky130_fd_sc_hd__o22ai_2 _1925_ (.A1(_0971_),
    .A2(_1017_),
    .B1(_0351_),
    .B2(_0356_),
    .Y(_0362_));
 sky130_fd_sc_hd__xor2_2 _1926_ (.A(_0361_),
    .B(_0362_),
    .X(_0363_));
 sky130_fd_sc_hd__a221o_2 _1927_ (.A1(debug_dco_word[17]),
    .A2(_0967_),
    .B1(_0363_),
    .B2(_0964_),
    .C1(_1024_),
    .X(_0099_));
 sky130_fd_sc_hd__a21boi_2 _1928_ (.A1(\dynamic_ki[2] ),
    .A2(\dynamic_kp[2] ),
    .B1_N(\lf_inst.error_in[1] ),
    .Y(_0364_));
 sky130_fd_sc_hd__a21bo_2 _1929_ (.A1(\dynamic_ki[2] ),
    .A2(\dynamic_kp[2] ),
    .B1_N(\lf_inst.error_in[1] ),
    .X(_0365_));
 sky130_fd_sc_hd__or2_2 _1930_ (.A(_0148_),
    .B(_0365_),
    .X(_0366_));
 sky130_fd_sc_hd__xnor2_2 _1931_ (.A(_0148_),
    .B(_0365_),
    .Y(_0367_));
 sky130_fd_sc_hd__a2111o_2 _1932_ (.A1(_0352_),
    .A2(_0355_),
    .B1(_0359_),
    .C1(_0360_),
    .D1(_0351_),
    .X(_0368_));
 sky130_fd_sc_hd__o21ba_2 _1933_ (.A1(_0971_),
    .A2(_1017_),
    .B1_N(_0359_),
    .X(_0369_));
 sky130_fd_sc_hd__a21o_2 _1934_ (.A1(_0368_),
    .A2(_0369_),
    .B1(_0367_),
    .X(_0370_));
 sky130_fd_sc_hd__a31oi_2 _1935_ (.A1(_0367_),
    .A2(_0368_),
    .A3(_0369_),
    .B1(_0965_),
    .Y(_0371_));
 sky130_fd_sc_hd__a221o_2 _1936_ (.A1(debug_dco_word[18]),
    .A2(_0967_),
    .B1(_0370_),
    .B2(_0371_),
    .C1(_0150_),
    .X(_0100_));
 sky130_fd_sc_hd__and2_2 _1937_ (.A(_0366_),
    .B(_0370_),
    .X(_0372_));
 sky130_fd_sc_hd__nand3_2 _1938_ (.A(_0155_),
    .B(_0156_),
    .C(_0364_),
    .Y(_0373_));
 sky130_fd_sc_hd__inv_2 _1939_ (.A(_0373_),
    .Y(_0374_));
 sky130_fd_sc_hd__a21oi_2 _1940_ (.A1(_0155_),
    .A2(_0156_),
    .B1(_0364_),
    .Y(_0375_));
 sky130_fd_sc_hd__nor2_2 _1941_ (.A(_0374_),
    .B(_0375_),
    .Y(_0376_));
 sky130_fd_sc_hd__xnor2_2 _1942_ (.A(_0372_),
    .B(_0376_),
    .Y(_0377_));
 sky130_fd_sc_hd__a221o_2 _1943_ (.A1(debug_dco_word[19]),
    .A2(_0967_),
    .B1(_0377_),
    .B2(_0964_),
    .C1(_0157_),
    .X(_0101_));
 sky130_fd_sc_hd__nor2_2 _1944_ (.A(_0165_),
    .B(_0365_),
    .Y(_0378_));
 sky130_fd_sc_hd__and2_2 _1945_ (.A(_0165_),
    .B(_0365_),
    .X(_0379_));
 sky130_fd_sc_hd__or2_2 _1946_ (.A(_0378_),
    .B(_0379_),
    .X(_0380_));
 sky130_fd_sc_hd__o311a_2 _1947_ (.A1(_0367_),
    .A2(_0369_),
    .A3(_0375_),
    .B1(_0373_),
    .C1(_0366_),
    .X(_0381_));
 sky130_fd_sc_hd__or4b_2 _1948_ (.A(_0367_),
    .B(_0375_),
    .C(_0368_),
    .D_N(_0373_),
    .X(_0382_));
 sky130_fd_sc_hd__a21oi_2 _1949_ (.A1(_0381_),
    .A2(_0382_),
    .B1(_0380_),
    .Y(_0383_));
 sky130_fd_sc_hd__a31o_2 _1950_ (.A1(_0380_),
    .A2(_0381_),
    .A3(_0382_),
    .B1(_0965_),
    .X(_0384_));
 sky130_fd_sc_hd__a21oi_2 _1951_ (.A1(debug_dco_word[20]),
    .A2(_0967_),
    .B1(_0167_),
    .Y(_0385_));
 sky130_fd_sc_hd__o21ai_2 _1952_ (.A1(_0383_),
    .A2(_0384_),
    .B1(_0385_),
    .Y(_0102_));
 sky130_fd_sc_hd__nor2_2 _1953_ (.A(_0170_),
    .B(_0365_),
    .Y(_0386_));
 sky130_fd_sc_hd__nand2_2 _1954_ (.A(_0170_),
    .B(_0365_),
    .Y(_0387_));
 sky130_fd_sc_hd__xnor2_2 _1955_ (.A(_0170_),
    .B(_0365_),
    .Y(_0388_));
 sky130_fd_sc_hd__or2_2 _1956_ (.A(_0378_),
    .B(_0383_),
    .X(_0389_));
 sky130_fd_sc_hd__xnor2_2 _1957_ (.A(_0388_),
    .B(_0389_),
    .Y(_0390_));
 sky130_fd_sc_hd__a221o_2 _1958_ (.A1(debug_dco_word[21]),
    .A2(_0967_),
    .B1(_0390_),
    .B2(_0964_),
    .C1(_0172_),
    .X(_0103_));
 sky130_fd_sc_hd__nor2_2 _1959_ (.A(_0178_),
    .B(_0365_),
    .Y(_0391_));
 sky130_fd_sc_hd__or2_2 _1960_ (.A(_0178_),
    .B(_0365_),
    .X(_0392_));
 sky130_fd_sc_hd__nor2_2 _1961_ (.A(_0179_),
    .B(_0364_),
    .Y(_0393_));
 sky130_fd_sc_hd__nor2_2 _1962_ (.A(_0391_),
    .B(_0393_),
    .Y(_0394_));
 sky130_fd_sc_hd__a21o_2 _1963_ (.A1(_0165_),
    .A2(_0170_),
    .B1(_0365_),
    .X(_0395_));
 sky130_fd_sc_hd__o31a_2 _1964_ (.A1(_0378_),
    .A2(_0383_),
    .A3(_0386_),
    .B1(_0387_),
    .X(_0396_));
 sky130_fd_sc_hd__and2_2 _1965_ (.A(_0394_),
    .B(_0396_),
    .X(_0397_));
 sky130_fd_sc_hd__o21ai_2 _1966_ (.A1(_0394_),
    .A2(_0396_),
    .B1(rst_n),
    .Y(_0398_));
 sky130_fd_sc_hd__o21ai_2 _1967_ (.A1(_0397_),
    .A2(_0398_),
    .B1(_0181_),
    .Y(_0399_));
 sky130_fd_sc_hd__o21a_2 _1968_ (.A1(debug_dco_word[22]),
    .A2(_0968_),
    .B1(_0399_),
    .X(_0104_));
 sky130_fd_sc_hd__xnor2_2 _1969_ (.A(_0184_),
    .B(_0364_),
    .Y(_0400_));
 sky130_fd_sc_hd__o21ai_2 _1970_ (.A1(_0391_),
    .A2(_0397_),
    .B1(_0400_),
    .Y(_0401_));
 sky130_fd_sc_hd__o31a_2 _1971_ (.A1(_0391_),
    .A2(_0397_),
    .A3(_0400_),
    .B1(_0964_),
    .X(_0402_));
 sky130_fd_sc_hd__a221o_2 _1972_ (.A1(debug_dco_word[23]),
    .A2(_0967_),
    .B1(_0401_),
    .B2(_0402_),
    .C1(_0186_),
    .X(_0105_));
 sky130_fd_sc_hd__a2111o_2 _1973_ (.A1(_0381_),
    .A2(_0382_),
    .B1(_0388_),
    .C1(_0380_),
    .D1(_0190_),
    .X(_0403_));
 sky130_fd_sc_hd__o211a_2 _1974_ (.A1(_0184_),
    .A2(_0365_),
    .B1(_0392_),
    .C1(_0395_),
    .X(_0404_));
 sky130_fd_sc_hd__nor2_2 _1975_ (.A(_0195_),
    .B(_0365_),
    .Y(_0405_));
 sky130_fd_sc_hd__nand2_2 _1976_ (.A(_0195_),
    .B(_0365_),
    .Y(_0406_));
 sky130_fd_sc_hd__nand2b_2 _1977_ (.A_N(_0405_),
    .B(_0406_),
    .Y(_0407_));
 sky130_fd_sc_hd__and3_2 _1978_ (.A(_0403_),
    .B(_0404_),
    .C(_0407_),
    .X(_0408_));
 sky130_fd_sc_hd__a21oi_2 _1979_ (.A1(_0403_),
    .A2(_0404_),
    .B1(_0407_),
    .Y(_0409_));
 sky130_fd_sc_hd__a21o_2 _1980_ (.A1(_0403_),
    .A2(_0404_),
    .B1(_0407_),
    .X(_0410_));
 sky130_fd_sc_hd__o21ai_2 _1981_ (.A1(_0408_),
    .A2(_0409_),
    .B1(_0964_),
    .Y(_0411_));
 sky130_fd_sc_hd__o221a_2 _1982_ (.A1(rst_n),
    .A2(initial_freq[24]),
    .B1(debug_dco_word[24]),
    .B2(_0968_),
    .C1(_0411_),
    .X(_0106_));
 sky130_fd_sc_hd__nor2_2 _1983_ (.A(_0405_),
    .B(_0409_),
    .Y(_0412_));
 sky130_fd_sc_hd__nor2_2 _1984_ (.A(_0199_),
    .B(_0365_),
    .Y(_0413_));
 sky130_fd_sc_hd__and2_2 _1985_ (.A(_0199_),
    .B(_0365_),
    .X(_0414_));
 sky130_fd_sc_hd__xnor2_2 _1986_ (.A(_0199_),
    .B(_0365_),
    .Y(_0415_));
 sky130_fd_sc_hd__xor2_2 _1987_ (.A(_0412_),
    .B(_0415_),
    .X(_0416_));
 sky130_fd_sc_hd__a221o_2 _1988_ (.A1(debug_dco_word[25]),
    .A2(_0967_),
    .B1(_0416_),
    .B2(_0964_),
    .C1(_0201_),
    .X(_0107_));
 sky130_fd_sc_hd__nor2_2 _1989_ (.A(_0207_),
    .B(_0365_),
    .Y(_0417_));
 sky130_fd_sc_hd__xnor2_2 _1990_ (.A(_0207_),
    .B(_0365_),
    .Y(_0418_));
 sky130_fd_sc_hd__o21ba_2 _1991_ (.A1(_0412_),
    .A2(_0414_),
    .B1_N(_0413_),
    .X(_0419_));
 sky130_fd_sc_hd__xor2_2 _1992_ (.A(_0418_),
    .B(_0419_),
    .X(_0420_));
 sky130_fd_sc_hd__a221o_2 _1993_ (.A1(debug_dco_word[26]),
    .A2(_0967_),
    .B1(_0420_),
    .B2(_0964_),
    .C1(_0209_),
    .X(_0108_));
 sky130_fd_sc_hd__xnor2_2 _1994_ (.A(_0212_),
    .B(_0364_),
    .Y(_0421_));
 sky130_fd_sc_hd__o21ba_2 _1995_ (.A1(_0418_),
    .A2(_0419_),
    .B1_N(_0417_),
    .X(_0422_));
 sky130_fd_sc_hd__xnor2_2 _1996_ (.A(_0421_),
    .B(_0422_),
    .Y(_0423_));
 sky130_fd_sc_hd__a21oi_2 _1997_ (.A1(debug_dco_word[27]),
    .A2(_0967_),
    .B1(_0213_),
    .Y(_0424_));
 sky130_fd_sc_hd__o21ai_2 _1998_ (.A1(_0965_),
    .A2(_0423_),
    .B1(_0424_),
    .Y(_0109_));
 sky130_fd_sc_hd__or2_2 _1999_ (.A(_0415_),
    .B(_0418_),
    .X(_0425_));
 sky130_fd_sc_hd__a2111oi_2 _2000_ (.A1(_0212_),
    .A2(_0364_),
    .B1(_0405_),
    .C1(_0413_),
    .D1(_0417_),
    .Y(_0426_));
 sky130_fd_sc_hd__o31a_2 _2001_ (.A1(_0410_),
    .A2(_0421_),
    .A3(_0425_),
    .B1(_0426_),
    .X(_0427_));
 sky130_fd_sc_hd__or2_2 _2002_ (.A(_0220_),
    .B(_0365_),
    .X(_0428_));
 sky130_fd_sc_hd__nand2_2 _2003_ (.A(_0220_),
    .B(_0365_),
    .Y(_0429_));
 sky130_fd_sc_hd__nand2_2 _2004_ (.A(_0428_),
    .B(_0429_),
    .Y(_0430_));
 sky130_fd_sc_hd__nand2_2 _2005_ (.A(_0427_),
    .B(_0430_),
    .Y(_0431_));
 sky130_fd_sc_hd__or2_2 _2006_ (.A(_0427_),
    .B(_0430_),
    .X(_0432_));
 sky130_fd_sc_hd__a21o_2 _2007_ (.A1(debug_dco_word[28]),
    .A2(_0967_),
    .B1(_0222_),
    .X(_0433_));
 sky130_fd_sc_hd__a31o_2 _2008_ (.A1(_0964_),
    .A2(_0431_),
    .A3(_0432_),
    .B1(_0433_),
    .X(_0110_));
 sky130_fd_sc_hd__a31o_2 _2009_ (.A1(\lf_inst.error_in[0] ),
    .A2(\dynamic_ki[2] ),
    .A3(\dynamic_kp[2] ),
    .B1(_0364_),
    .X(_0434_));
 sky130_fd_sc_hd__nand2_2 _2010_ (.A(_0227_),
    .B(_0434_),
    .Y(_0435_));
 sky130_fd_sc_hd__xnor2_2 _2011_ (.A(_0227_),
    .B(_0434_),
    .Y(_0436_));
 sky130_fd_sc_hd__a21o_2 _2012_ (.A1(_0428_),
    .A2(_0432_),
    .B1(_0436_),
    .X(_0437_));
 sky130_fd_sc_hd__a31oi_2 _2013_ (.A1(_0428_),
    .A2(_0432_),
    .A3(_0436_),
    .B1(_0965_),
    .Y(_0438_));
 sky130_fd_sc_hd__a221o_2 _2014_ (.A1(debug_dco_word[29]),
    .A2(_0967_),
    .B1(_0437_),
    .B2(_0438_),
    .C1(_0228_),
    .X(_0111_));
 sky130_fd_sc_hd__and2_2 _2015_ (.A(\lf_inst.error_in[1] ),
    .B(_0233_),
    .X(_0439_));
 sky130_fd_sc_hd__nor2_2 _2016_ (.A(\lf_inst.error_in[1] ),
    .B(_0233_),
    .Y(_0440_));
 sky130_fd_sc_hd__or2_2 _2017_ (.A(_0439_),
    .B(_0440_),
    .X(_0441_));
 sky130_fd_sc_hd__o311a_2 _2018_ (.A1(_0427_),
    .A2(_0430_),
    .A3(_0436_),
    .B1(_0435_),
    .C1(_0428_),
    .X(_0442_));
 sky130_fd_sc_hd__nand2_2 _2019_ (.A(_0441_),
    .B(_0442_),
    .Y(_0443_));
 sky130_fd_sc_hd__nor2_2 _2020_ (.A(_0441_),
    .B(_0442_),
    .Y(_0444_));
 sky130_fd_sc_hd__and3b_2 _2021_ (.A_N(_0444_),
    .B(_0964_),
    .C(_0443_),
    .X(_0445_));
 sky130_fd_sc_hd__a211o_2 _2022_ (.A1(debug_dco_word[30]),
    .A2(_0967_),
    .B1(_0234_),
    .C1(_0445_),
    .X(_0112_));
 sky130_fd_sc_hd__or3_2 _2023_ (.A(_0236_),
    .B(_0439_),
    .C(_0444_),
    .X(_0446_));
 sky130_fd_sc_hd__o21ai_2 _2024_ (.A1(_0439_),
    .A2(_0444_),
    .B1(_0236_),
    .Y(_0447_));
 sky130_fd_sc_hd__a21o_2 _2025_ (.A1(debug_dco_word[31]),
    .A2(_0967_),
    .B1(_0239_),
    .X(_0448_));
 sky130_fd_sc_hd__a31o_2 _2026_ (.A1(_0964_),
    .A2(_0446_),
    .A3(_0447_),
    .B1(_0448_),
    .X(_0113_));
 sky130_fd_sc_hd__nand3_2 _2027_ (.A(rst_n),
    .B(_0800_),
    .C(_0806_),
    .Y(_0449_));
 sky130_fd_sc_hd__nor2_2 _2028_ (.A(\div_inst.counter[0] ),
    .B(_0449_),
    .Y(_0114_));
 sky130_fd_sc_hd__nor2_2 _2029_ (.A(_0908_),
    .B(_0449_),
    .Y(_0115_));
 sky130_fd_sc_hd__nor2_2 _2030_ (.A(_0905_),
    .B(_0449_),
    .Y(_0116_));
 sky130_fd_sc_hd__nor2_2 _2031_ (.A(_0903_),
    .B(_0449_),
    .Y(_0117_));
 sky130_fd_sc_hd__nor2_2 _2032_ (.A(_0914_),
    .B(_0449_),
    .Y(_0118_));
 sky130_fd_sc_hd__nor2_2 _2033_ (.A(_0921_),
    .B(_0449_),
    .Y(_0119_));
 sky130_fd_sc_hd__nor2_2 _2034_ (.A(_0919_),
    .B(_0449_),
    .Y(_0120_));
 sky130_fd_sc_hd__nor2_2 _2035_ (.A(_0916_),
    .B(_0449_),
    .Y(_0121_));
 sky130_fd_sc_hd__nor2_2 _2036_ (.A(_0899_),
    .B(_0449_),
    .Y(_0122_));
 sky130_fd_sc_hd__nor2_2 _2037_ (.A(_0897_),
    .B(_0449_),
    .Y(_0123_));
 sky130_fd_sc_hd__nor2_2 _2038_ (.A(_0898_),
    .B(_0449_),
    .Y(_0124_));
 sky130_fd_sc_hd__nor2_2 _2039_ (.A(_0894_),
    .B(_0449_),
    .Y(_0125_));
 sky130_fd_sc_hd__nor2_2 _2040_ (.A(_0891_),
    .B(_0449_),
    .Y(_0126_));
 sky130_fd_sc_hd__nor2_2 _2041_ (.A(_0889_),
    .B(_0449_),
    .Y(_0127_));
 sky130_fd_sc_hd__nor2_2 _2042_ (.A(_0886_),
    .B(_0449_),
    .Y(_0128_));
 sky130_fd_sc_hd__nor2_2 _2043_ (.A(_0885_),
    .B(_0449_),
    .Y(_0129_));
 sky130_fd_sc_hd__nor2_2 _2044_ (.A(_0874_),
    .B(_0449_),
    .Y(_0130_));
 sky130_fd_sc_hd__nor2_2 _2045_ (.A(_0873_),
    .B(_0449_),
    .Y(_0131_));
 sky130_fd_sc_hd__nor2_2 _2046_ (.A(_0870_),
    .B(_0449_),
    .Y(_0132_));
 sky130_fd_sc_hd__nor2_2 _2047_ (.A(_0868_),
    .B(_0449_),
    .Y(_0133_));
 sky130_fd_sc_hd__nor2_2 _2048_ (.A(_0865_),
    .B(_0449_),
    .Y(_0134_));
 sky130_fd_sc_hd__nor2_2 _2049_ (.A(_0863_),
    .B(_0449_),
    .Y(_0135_));
 sky130_fd_sc_hd__nor2_2 _2050_ (.A(_0861_),
    .B(_0449_),
    .Y(_0136_));
 sky130_fd_sc_hd__nor2_2 _2051_ (.A(_0859_),
    .B(_0449_),
    .Y(_0137_));
 sky130_fd_sc_hd__nor2_2 _2052_ (.A(_0853_),
    .B(_0449_),
    .Y(_0138_));
 sky130_fd_sc_hd__nor2_2 _2053_ (.A(_0851_),
    .B(_0449_),
    .Y(_0139_));
 sky130_fd_sc_hd__nor2_2 _2054_ (.A(_0847_),
    .B(_0449_),
    .Y(_0140_));
 sky130_fd_sc_hd__nor2_2 _2055_ (.A(_0846_),
    .B(_0449_),
    .Y(_0141_));
 sky130_fd_sc_hd__nor2_2 _2056_ (.A(_0844_),
    .B(_0449_),
    .Y(_0142_));
 sky130_fd_sc_hd__nor2_2 _2057_ (.A(_0842_),
    .B(_0449_),
    .Y(_0143_));
 sky130_fd_sc_hd__nor2_2 _2058_ (.A(_0837_),
    .B(_0449_),
    .Y(_0144_));
 sky130_fd_sc_hd__nor2_2 _2059_ (.A(_0839_),
    .B(_0449_),
    .Y(_0145_));
 sky130_fd_sc_hd__o211a_2 _2060_ (.A1(\lf_inst.zero_error_count[3] ),
    .A2(\lf_inst.zero_error_count[2] ),
    .B1(\lf_inst.sample_en ),
    .C1(\lf_inst.zero_error_count[4] ),
    .X(_0450_));
 sky130_fd_sc_hd__o21a_2 _2061_ (.A1(lock_detect),
    .A2(_0450_),
    .B1(_0266_),
    .X(_0146_));
 sky130_fd_sc_hd__dfxtp_2 _2062_ (.CLK(sys_clk),
    .D(_0003_),
    .Q(\dynamic_ki[2] ));
 sky130_fd_sc_hd__dfxtp_2 _2063_ (.CLK(sys_clk),
    .D(_0004_),
    .Q(\dco_inst.accumulator[0] ));
 sky130_fd_sc_hd__dfxtp_2 _2064_ (.CLK(sys_clk),
    .D(_0005_),
    .Q(\dco_inst.accumulator[1] ));
 sky130_fd_sc_hd__dfxtp_2 _2065_ (.CLK(sys_clk),
    .D(_0006_),
    .Q(\dco_inst.accumulator[2] ));
 sky130_fd_sc_hd__dfxtp_2 _2066_ (.CLK(sys_clk),
    .D(_0007_),
    .Q(\dco_inst.accumulator[3] ));
 sky130_fd_sc_hd__dfxtp_2 _2067_ (.CLK(sys_clk),
    .D(_0008_),
    .Q(\dco_inst.accumulator[4] ));
 sky130_fd_sc_hd__dfxtp_2 _2068_ (.CLK(sys_clk),
    .D(_0009_),
    .Q(\dco_inst.accumulator[5] ));
 sky130_fd_sc_hd__dfxtp_2 _2069_ (.CLK(sys_clk),
    .D(_0010_),
    .Q(\dco_inst.accumulator[6] ));
 sky130_fd_sc_hd__dfxtp_2 _2070_ (.CLK(sys_clk),
    .D(_0011_),
    .Q(\dco_inst.accumulator[7] ));
 sky130_fd_sc_hd__dfxtp_2 _2071_ (.CLK(sys_clk),
    .D(_0012_),
    .Q(\dco_inst.accumulator[8] ));
 sky130_fd_sc_hd__dfxtp_2 _2072_ (.CLK(sys_clk),
    .D(_0013_),
    .Q(\dco_inst.accumulator[9] ));
 sky130_fd_sc_hd__dfxtp_2 _2073_ (.CLK(sys_clk),
    .D(_0014_),
    .Q(\dco_inst.accumulator[10] ));
 sky130_fd_sc_hd__dfxtp_2 _2074_ (.CLK(sys_clk),
    .D(_0015_),
    .Q(\dco_inst.accumulator[11] ));
 sky130_fd_sc_hd__dfxtp_2 _2075_ (.CLK(sys_clk),
    .D(_0016_),
    .Q(\dco_inst.accumulator[12] ));
 sky130_fd_sc_hd__dfxtp_2 _2076_ (.CLK(sys_clk),
    .D(_0017_),
    .Q(\dco_inst.accumulator[13] ));
 sky130_fd_sc_hd__dfxtp_2 _2077_ (.CLK(sys_clk),
    .D(_0018_),
    .Q(\dco_inst.accumulator[14] ));
 sky130_fd_sc_hd__dfxtp_2 _2078_ (.CLK(sys_clk),
    .D(_0019_),
    .Q(\dco_inst.accumulator[15] ));
 sky130_fd_sc_hd__dfxtp_2 _2079_ (.CLK(sys_clk),
    .D(_0020_),
    .Q(\dco_inst.accumulator[16] ));
 sky130_fd_sc_hd__dfxtp_2 _2080_ (.CLK(sys_clk),
    .D(_0021_),
    .Q(\dco_inst.accumulator[17] ));
 sky130_fd_sc_hd__dfxtp_2 _2081_ (.CLK(sys_clk),
    .D(_0022_),
    .Q(\dco_inst.accumulator[18] ));
 sky130_fd_sc_hd__dfxtp_2 _2082_ (.CLK(sys_clk),
    .D(_0023_),
    .Q(\dco_inst.accumulator[19] ));
 sky130_fd_sc_hd__dfxtp_2 _2083_ (.CLK(sys_clk),
    .D(_0024_),
    .Q(\dco_inst.accumulator[20] ));
 sky130_fd_sc_hd__dfxtp_2 _2084_ (.CLK(sys_clk),
    .D(_0025_),
    .Q(\dco_inst.accumulator[21] ));
 sky130_fd_sc_hd__dfxtp_2 _2085_ (.CLK(sys_clk),
    .D(_0026_),
    .Q(\dco_inst.accumulator[22] ));
 sky130_fd_sc_hd__dfxtp_2 _2086_ (.CLK(sys_clk),
    .D(_0027_),
    .Q(\dco_inst.accumulator[23] ));
 sky130_fd_sc_hd__dfxtp_2 _2087_ (.CLK(sys_clk),
    .D(_0028_),
    .Q(\dco_inst.accumulator[24] ));
 sky130_fd_sc_hd__dfxtp_2 _2088_ (.CLK(sys_clk),
    .D(_0029_),
    .Q(\dco_inst.accumulator[25] ));
 sky130_fd_sc_hd__dfxtp_2 _2089_ (.CLK(sys_clk),
    .D(_0030_),
    .Q(\dco_inst.accumulator[26] ));
 sky130_fd_sc_hd__dfxtp_2 _2090_ (.CLK(sys_clk),
    .D(_0031_),
    .Q(\dco_inst.accumulator[27] ));
 sky130_fd_sc_hd__dfxtp_2 _2091_ (.CLK(sys_clk),
    .D(_0032_),
    .Q(\dco_inst.accumulator[28] ));
 sky130_fd_sc_hd__dfxtp_2 _2092_ (.CLK(sys_clk),
    .D(_0033_),
    .Q(\dco_inst.accumulator[29] ));
 sky130_fd_sc_hd__dfxtp_2 _2093_ (.CLK(sys_clk),
    .D(_0034_),
    .Q(\dco_inst.accumulator[30] ));
 sky130_fd_sc_hd__dfxtp_2 _2094_ (.CLK(sys_clk),
    .D(_0035_),
    .Q(pll_out));
 sky130_fd_sc_hd__dfxtp_2 _2095_ (.CLK(pll_out),
    .D(_0036_),
    .Q(\div_inst.clk_out ));
 sky130_fd_sc_hd__dfxtp_2 _2096_ (.CLK(sys_clk),
    .D(_0000_),
    .Q(\pfd_inst.state[0] ));
 sky130_fd_sc_hd__dfxtp_2 _2097_ (.CLK(sys_clk),
    .D(_0001_),
    .Q(\pfd_inst.state[1] ));
 sky130_fd_sc_hd__dfxtp_2 _2098_ (.CLK(sys_clk),
    .D(_0002_),
    .Q(\pfd_inst.state[2] ));
 sky130_fd_sc_hd__dfxtp_2 _2099_ (.CLK(sys_clk),
    .D(_0037_),
    .Q(\lf_inst.integrator[1] ));
 sky130_fd_sc_hd__dfxtp_2 _2100_ (.CLK(sys_clk),
    .D(_0038_),
    .Q(\lf_inst.integrator[2] ));
 sky130_fd_sc_hd__dfxtp_2 _2101_ (.CLK(sys_clk),
    .D(_0039_),
    .Q(\lf_inst.integrator[3] ));
 sky130_fd_sc_hd__dfxtp_2 _2102_ (.CLK(sys_clk),
    .D(_0040_),
    .Q(\lf_inst.integrator[4] ));
 sky130_fd_sc_hd__dfxtp_2 _2103_ (.CLK(sys_clk),
    .D(_0041_),
    .Q(\lf_inst.integrator[5] ));
 sky130_fd_sc_hd__dfxtp_2 _2104_ (.CLK(sys_clk),
    .D(_0042_),
    .Q(\lf_inst.integrator[6] ));
 sky130_fd_sc_hd__dfxtp_2 _2105_ (.CLK(sys_clk),
    .D(_0043_),
    .Q(\lf_inst.integrator[7] ));
 sky130_fd_sc_hd__dfxtp_2 _2106_ (.CLK(sys_clk),
    .D(_0044_),
    .Q(\lf_inst.integrator[8] ));
 sky130_fd_sc_hd__dfxtp_2 _2107_ (.CLK(sys_clk),
    .D(_0045_),
    .Q(\lf_inst.integrator[0] ));
 sky130_fd_sc_hd__dfxtp_2 _2108_ (.CLK(sys_clk),
    .D(_0046_),
    .Q(\lf_inst.integrator[9] ));
 sky130_fd_sc_hd__dfxtp_2 _2109_ (.CLK(sys_clk),
    .D(_0047_),
    .Q(\lf_inst.integrator[10] ));
 sky130_fd_sc_hd__dfxtp_2 _2110_ (.CLK(sys_clk),
    .D(_0048_),
    .Q(\lf_inst.integrator[11] ));
 sky130_fd_sc_hd__dfxtp_2 _2111_ (.CLK(sys_clk),
    .D(_0049_),
    .Q(\lf_inst.integrator[12] ));
 sky130_fd_sc_hd__dfxtp_2 _2112_ (.CLK(sys_clk),
    .D(_0050_),
    .Q(\lf_inst.integrator[13] ));
 sky130_fd_sc_hd__dfxtp_2 _2113_ (.CLK(sys_clk),
    .D(_0051_),
    .Q(\lf_inst.integrator[14] ));
 sky130_fd_sc_hd__dfxtp_2 _2114_ (.CLK(sys_clk),
    .D(_0052_),
    .Q(\lf_inst.integrator[15] ));
 sky130_fd_sc_hd__dfxtp_2 _2115_ (.CLK(sys_clk),
    .D(_0053_),
    .Q(\lf_inst.integrator[16] ));
 sky130_fd_sc_hd__dfxtp_2 _2116_ (.CLK(sys_clk),
    .D(_0054_),
    .Q(\lf_inst.integrator[17] ));
 sky130_fd_sc_hd__dfxtp_2 _2117_ (.CLK(sys_clk),
    .D(_0055_),
    .Q(\lf_inst.integrator[18] ));
 sky130_fd_sc_hd__dfxtp_2 _2118_ (.CLK(sys_clk),
    .D(_0056_),
    .Q(\lf_inst.integrator[19] ));
 sky130_fd_sc_hd__dfxtp_2 _2119_ (.CLK(sys_clk),
    .D(_0057_),
    .Q(\lf_inst.integrator[20] ));
 sky130_fd_sc_hd__dfxtp_2 _2120_ (.CLK(sys_clk),
    .D(_0058_),
    .Q(\lf_inst.integrator[21] ));
 sky130_fd_sc_hd__dfxtp_2 _2121_ (.CLK(sys_clk),
    .D(_0059_),
    .Q(\lf_inst.integrator[22] ));
 sky130_fd_sc_hd__dfxtp_2 _2122_ (.CLK(sys_clk),
    .D(_0060_),
    .Q(\lf_inst.integrator[23] ));
 sky130_fd_sc_hd__dfxtp_2 _2123_ (.CLK(sys_clk),
    .D(_0061_),
    .Q(\lf_inst.integrator[24] ));
 sky130_fd_sc_hd__dfxtp_2 _2124_ (.CLK(sys_clk),
    .D(_0062_),
    .Q(\lf_inst.integrator[25] ));
 sky130_fd_sc_hd__dfxtp_2 _2125_ (.CLK(sys_clk),
    .D(_0063_),
    .Q(\lf_inst.integrator[26] ));
 sky130_fd_sc_hd__dfxtp_2 _2126_ (.CLK(sys_clk),
    .D(_0064_),
    .Q(\lf_inst.integrator[27] ));
 sky130_fd_sc_hd__dfxtp_2 _2127_ (.CLK(sys_clk),
    .D(_0065_),
    .Q(\lf_inst.integrator[28] ));
 sky130_fd_sc_hd__dfxtp_2 _2128_ (.CLK(sys_clk),
    .D(_0066_),
    .Q(\lf_inst.integrator[29] ));
 sky130_fd_sc_hd__dfxtp_2 _2129_ (.CLK(sys_clk),
    .D(_0067_),
    .Q(\lf_inst.integrator[30] ));
 sky130_fd_sc_hd__dfxtp_2 _2130_ (.CLK(sys_clk),
    .D(_0068_),
    .Q(\lf_inst.integrator[31] ));
 sky130_fd_sc_hd__dfxtp_2 _2131_ (.CLK(sys_clk),
    .D(_0069_),
    .Q(\dynamic_kp[2] ));
 sky130_fd_sc_hd__dfxtp_2 _2132_ (.CLK(sys_clk),
    .D(_0070_),
    .Q(\unlock_timer[0] ));
 sky130_fd_sc_hd__dfxtp_2 _2133_ (.CLK(sys_clk),
    .D(_0071_),
    .Q(\unlock_timer[1] ));
 sky130_fd_sc_hd__dfxtp_2 _2134_ (.CLK(sys_clk),
    .D(_0072_),
    .Q(\unlock_timer[2] ));
 sky130_fd_sc_hd__dfxtp_2 _2135_ (.CLK(sys_clk),
    .D(_0073_),
    .Q(\unlock_timer[3] ));
 sky130_fd_sc_hd__dfxtp_2 _2136_ (.CLK(sys_clk),
    .D(_0074_),
    .Q(\unlock_timer[4] ));
 sky130_fd_sc_hd__dfxtp_2 _2137_ (.CLK(sys_clk),
    .D(_0075_),
    .Q(\unlock_timer[5] ));
 sky130_fd_sc_hd__dfrtp_2 _2138_ (.CLK(sys_clk),
    .D(ref_clk),
    .RESET_B(rst_n),
    .Q(\pfd_inst.ref_sync[0] ));
 sky130_fd_sc_hd__dfrtp_2 _2139_ (.CLK(sys_clk),
    .D(\pfd_inst.ref_sync[0] ),
    .RESET_B(rst_n),
    .Q(\pfd_inst.ref_sync[1] ));
 sky130_fd_sc_hd__dfrtp_2 _2140_ (.CLK(sys_clk),
    .D(\pfd_inst.ref_sync[1] ),
    .RESET_B(rst_n),
    .Q(\pfd_inst.ref_sync[2] ));
 sky130_fd_sc_hd__dfrtp_2 _2141_ (.CLK(sys_clk),
    .D(\div_inst.clk_out ),
    .RESET_B(rst_n),
    .Q(\pfd_inst.fb_sync[0] ));
 sky130_fd_sc_hd__dfrtp_2 _2142_ (.CLK(sys_clk),
    .D(\pfd_inst.fb_sync[0] ),
    .RESET_B(rst_n),
    .Q(\pfd_inst.fb_sync[1] ));
 sky130_fd_sc_hd__dfrtp_2 _2143_ (.CLK(sys_clk),
    .D(\pfd_inst.fb_sync[1] ),
    .RESET_B(rst_n),
    .Q(\pfd_inst.fb_sync[2] ));
 sky130_fd_sc_hd__dfxtp_2 _2144_ (.CLK(sys_clk),
    .D(rst_n),
    .Q(\lf_inst.sample_en ));
 sky130_fd_sc_hd__dfxtp_2 _2145_ (.CLK(sys_clk),
    .D(_0076_),
    .Q(\lf_inst.error_in[0] ));
 sky130_fd_sc_hd__dfxtp_2 _2146_ (.CLK(sys_clk),
    .D(_0077_),
    .Q(\lf_inst.error_in[1] ));
 sky130_fd_sc_hd__dfxtp_2 _2147_ (.CLK(sys_clk),
    .D(_0078_),
    .Q(\lf_inst.zero_error_count[0] ));
 sky130_fd_sc_hd__dfxtp_2 _2148_ (.CLK(sys_clk),
    .D(_0079_),
    .Q(\lf_inst.zero_error_count[1] ));
 sky130_fd_sc_hd__dfxtp_2 _2149_ (.CLK(sys_clk),
    .D(_0080_),
    .Q(\lf_inst.zero_error_count[2] ));
 sky130_fd_sc_hd__dfxtp_2 _2150_ (.CLK(sys_clk),
    .D(_0081_),
    .Q(\lf_inst.zero_error_count[3] ));
 sky130_fd_sc_hd__dfxtp_2 _2151_ (.CLK(sys_clk),
    .D(_0082_),
    .Q(\lf_inst.zero_error_count[4] ));
 sky130_fd_sc_hd__dfxtp_2 _2152_ (.CLK(sys_clk),
    .D(_0083_),
    .Q(debug_dco_word[1]));
 sky130_fd_sc_hd__dfxtp_2 _2153_ (.CLK(sys_clk),
    .D(_0084_),
    .Q(debug_dco_word[2]));
 sky130_fd_sc_hd__dfxtp_2 _2154_ (.CLK(sys_clk),
    .D(_0085_),
    .Q(debug_dco_word[3]));
 sky130_fd_sc_hd__dfxtp_2 _2155_ (.CLK(sys_clk),
    .D(_0086_),
    .Q(debug_dco_word[4]));
 sky130_fd_sc_hd__dfxtp_2 _2156_ (.CLK(sys_clk),
    .D(_0087_),
    .Q(debug_dco_word[5]));
 sky130_fd_sc_hd__dfxtp_2 _2157_ (.CLK(sys_clk),
    .D(_0088_),
    .Q(debug_dco_word[6]));
 sky130_fd_sc_hd__dfxtp_2 _2158_ (.CLK(sys_clk),
    .D(_0089_),
    .Q(debug_dco_word[7]));
 sky130_fd_sc_hd__dfxtp_2 _2159_ (.CLK(sys_clk),
    .D(_0090_),
    .Q(debug_dco_word[8]));
 sky130_fd_sc_hd__dfxtp_2 _2160_ (.CLK(sys_clk),
    .D(_0091_),
    .Q(debug_dco_word[9]));
 sky130_fd_sc_hd__dfxtp_2 _2161_ (.CLK(sys_clk),
    .D(_0092_),
    .Q(debug_dco_word[10]));
 sky130_fd_sc_hd__dfxtp_2 _2162_ (.CLK(sys_clk),
    .D(_0093_),
    .Q(debug_dco_word[11]));
 sky130_fd_sc_hd__dfxtp_2 _2163_ (.CLK(sys_clk),
    .D(_0094_),
    .Q(debug_dco_word[12]));
 sky130_fd_sc_hd__dfxtp_2 _2164_ (.CLK(sys_clk),
    .D(_0095_),
    .Q(debug_dco_word[13]));
 sky130_fd_sc_hd__dfxtp_2 _2165_ (.CLK(sys_clk),
    .D(_0096_),
    .Q(debug_dco_word[14]));
 sky130_fd_sc_hd__dfxtp_2 _2166_ (.CLK(sys_clk),
    .D(_0097_),
    .Q(debug_dco_word[15]));
 sky130_fd_sc_hd__dfxtp_2 _2167_ (.CLK(sys_clk),
    .D(_0098_),
    .Q(debug_dco_word[16]));
 sky130_fd_sc_hd__dfxtp_2 _2168_ (.CLK(sys_clk),
    .D(_0099_),
    .Q(debug_dco_word[17]));
 sky130_fd_sc_hd__dfxtp_2 _2169_ (.CLK(sys_clk),
    .D(_0100_),
    .Q(debug_dco_word[18]));
 sky130_fd_sc_hd__dfxtp_2 _2170_ (.CLK(sys_clk),
    .D(_0101_),
    .Q(debug_dco_word[19]));
 sky130_fd_sc_hd__dfxtp_2 _2171_ (.CLK(sys_clk),
    .D(_0102_),
    .Q(debug_dco_word[20]));
 sky130_fd_sc_hd__dfxtp_2 _2172_ (.CLK(sys_clk),
    .D(_0103_),
    .Q(debug_dco_word[21]));
 sky130_fd_sc_hd__dfxtp_2 _2173_ (.CLK(sys_clk),
    .D(_0104_),
    .Q(debug_dco_word[22]));
 sky130_fd_sc_hd__dfxtp_2 _2174_ (.CLK(sys_clk),
    .D(_0105_),
    .Q(debug_dco_word[23]));
 sky130_fd_sc_hd__dfxtp_2 _2175_ (.CLK(sys_clk),
    .D(_0106_),
    .Q(debug_dco_word[24]));
 sky130_fd_sc_hd__dfxtp_2 _2176_ (.CLK(sys_clk),
    .D(_0107_),
    .Q(debug_dco_word[25]));
 sky130_fd_sc_hd__dfxtp_2 _2177_ (.CLK(sys_clk),
    .D(_0108_),
    .Q(debug_dco_word[26]));
 sky130_fd_sc_hd__dfxtp_2 _2178_ (.CLK(sys_clk),
    .D(_0109_),
    .Q(debug_dco_word[27]));
 sky130_fd_sc_hd__dfxtp_2 _2179_ (.CLK(sys_clk),
    .D(_0110_),
    .Q(debug_dco_word[28]));
 sky130_fd_sc_hd__dfxtp_2 _2180_ (.CLK(sys_clk),
    .D(_0111_),
    .Q(debug_dco_word[29]));
 sky130_fd_sc_hd__dfxtp_2 _2181_ (.CLK(sys_clk),
    .D(_0112_),
    .Q(debug_dco_word[30]));
 sky130_fd_sc_hd__dfxtp_2 _2182_ (.CLK(sys_clk),
    .D(_0113_),
    .Q(debug_dco_word[31]));
 sky130_fd_sc_hd__dfxtp_2 _2183_ (.CLK(pll_out),
    .D(_0114_),
    .Q(\div_inst.counter[0] ));
 sky130_fd_sc_hd__dfxtp_2 _2184_ (.CLK(pll_out),
    .D(_0115_),
    .Q(\div_inst.counter[1] ));
 sky130_fd_sc_hd__dfxtp_2 _2185_ (.CLK(pll_out),
    .D(_0116_),
    .Q(\div_inst.counter[2] ));
 sky130_fd_sc_hd__dfxtp_2 _2186_ (.CLK(pll_out),
    .D(_0117_),
    .Q(\div_inst.counter[3] ));
 sky130_fd_sc_hd__dfxtp_2 _2187_ (.CLK(pll_out),
    .D(_0118_),
    .Q(\div_inst.counter[4] ));
 sky130_fd_sc_hd__dfxtp_2 _2188_ (.CLK(pll_out),
    .D(_0119_),
    .Q(\div_inst.counter[5] ));
 sky130_fd_sc_hd__dfxtp_2 _2189_ (.CLK(pll_out),
    .D(_0120_),
    .Q(\div_inst.counter[6] ));
 sky130_fd_sc_hd__dfxtp_2 _2190_ (.CLK(pll_out),
    .D(_0121_),
    .Q(\div_inst.counter[7] ));
 sky130_fd_sc_hd__dfxtp_2 _2191_ (.CLK(pll_out),
    .D(_0122_),
    .Q(\div_inst.counter[8] ));
 sky130_fd_sc_hd__dfxtp_2 _2192_ (.CLK(pll_out),
    .D(_0123_),
    .Q(\div_inst.counter[9] ));
 sky130_fd_sc_hd__dfxtp_2 _2193_ (.CLK(pll_out),
    .D(_0124_),
    .Q(\div_inst.counter[10] ));
 sky130_fd_sc_hd__dfxtp_2 _2194_ (.CLK(pll_out),
    .D(_0125_),
    .Q(\div_inst.counter[11] ));
 sky130_fd_sc_hd__dfxtp_2 _2195_ (.CLK(pll_out),
    .D(_0126_),
    .Q(\div_inst.counter[12] ));
 sky130_fd_sc_hd__dfxtp_2 _2196_ (.CLK(pll_out),
    .D(_0127_),
    .Q(\div_inst.counter[13] ));
 sky130_fd_sc_hd__dfxtp_2 _2197_ (.CLK(pll_out),
    .D(_0128_),
    .Q(\div_inst.counter[14] ));
 sky130_fd_sc_hd__dfxtp_2 _2198_ (.CLK(pll_out),
    .D(_0129_),
    .Q(\div_inst.counter[15] ));
 sky130_fd_sc_hd__dfxtp_2 _2199_ (.CLK(pll_out),
    .D(_0130_),
    .Q(\div_inst.counter[16] ));
 sky130_fd_sc_hd__dfxtp_2 _2200_ (.CLK(pll_out),
    .D(_0131_),
    .Q(\div_inst.counter[17] ));
 sky130_fd_sc_hd__dfxtp_2 _2201_ (.CLK(pll_out),
    .D(_0132_),
    .Q(\div_inst.counter[18] ));
 sky130_fd_sc_hd__dfxtp_2 _2202_ (.CLK(pll_out),
    .D(_0133_),
    .Q(\div_inst.counter[19] ));
 sky130_fd_sc_hd__dfxtp_2 _2203_ (.CLK(pll_out),
    .D(_0134_),
    .Q(\div_inst.counter[20] ));
 sky130_fd_sc_hd__dfxtp_2 _2204_ (.CLK(pll_out),
    .D(_0135_),
    .Q(\div_inst.counter[21] ));
 sky130_fd_sc_hd__dfxtp_2 _2205_ (.CLK(pll_out),
    .D(_0136_),
    .Q(\div_inst.counter[22] ));
 sky130_fd_sc_hd__dfxtp_2 _2206_ (.CLK(pll_out),
    .D(_0137_),
    .Q(\div_inst.counter[23] ));
 sky130_fd_sc_hd__dfxtp_2 _2207_ (.CLK(pll_out),
    .D(_0138_),
    .Q(\div_inst.counter[24] ));
 sky130_fd_sc_hd__dfxtp_2 _2208_ (.CLK(pll_out),
    .D(_0139_),
    .Q(\div_inst.counter[25] ));
 sky130_fd_sc_hd__dfxtp_2 _2209_ (.CLK(pll_out),
    .D(_0140_),
    .Q(\div_inst.counter[26] ));
 sky130_fd_sc_hd__dfxtp_2 _2210_ (.CLK(pll_out),
    .D(_0141_),
    .Q(\div_inst.counter[27] ));
 sky130_fd_sc_hd__dfxtp_2 _2211_ (.CLK(pll_out),
    .D(_0142_),
    .Q(\div_inst.counter[28] ));
 sky130_fd_sc_hd__dfxtp_2 _2212_ (.CLK(pll_out),
    .D(_0143_),
    .Q(\div_inst.counter[29] ));
 sky130_fd_sc_hd__dfxtp_2 _2213_ (.CLK(pll_out),
    .D(_0144_),
    .Q(\div_inst.counter[30] ));
 sky130_fd_sc_hd__dfxtp_2 _2214_ (.CLK(pll_out),
    .D(_0145_),
    .Q(\div_inst.counter[31] ));
 sky130_fd_sc_hd__dfxtp_2 _2215_ (.CLK(sys_clk),
    .D(_0146_),
    .Q(lock_detect));
 sky130_fd_sc_hd__buf_2 _2216_ (.A(\lf_inst.integrator[0] ),
    .X(debug_dco_word[0]));
endmodule
