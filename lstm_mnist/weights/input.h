// size 420 

#include "../lstm.h" 

#ifndef INPUT_H_
#define INPUT_H_ 

// dummy input
model_default_t input[784] = {
-0.368598286930 ,
0.807340240712 ,
-0.247856396963 ,
-0.950076503340 ,
-0.543370789169 ,
0.710931906020 ,
0.480029847207 ,
0.607079433303 ,
-0.485685796945 ,
0.823545198130 ,
0.061340036225 ,
-0.378834728545 ,
0.827580381141 ,
0.336068946804 ,
0.192870958451 ,
0.412830782101 ,
0.287293284500 ,
0.053310716938 ,
0.014981664741 ,
-0.621994428060 ,
-0.723920158450 ,
0.741057443106 ,
-0.033589702426 ,
0.133130824749 ,
-0.820418670813 ,
0.490861632360 ,
-0.345218988900 ,
0.774403489294 ,
0.107391123346 ,
0.008486886265 ,
0.949810942555 ,
0.886820249260 ,
-0.015333174378 ,
-0.456180909243 ,
0.025704434486 ,
0.683046073653 ,
0.208960243273 ,
0.429743824165 ,
0.458588128446 ,
-0.518476563543 ,
-0.706965621283 ,
-0.482507220809 ,
0.513496051166 ,
-0.123481718094 ,
-0.360473176364 ,
0.134511201495 ,
0.156087571495 ,
-0.616566091036 ,
-0.696383865351 ,
0.947305671019 ,
-0.660846746889 ,
0.502009870644 ,
-0.933501439166 ,
-0.346210700718 ,
0.707782213022 ,
-0.925279899870 ,
0.826571646987 ,
-0.265940814861 ,
0.839105314560 ,
0.558966464985 ,
-0.415608491865 ,
0.994991185996 ,
0.239798753751 ,
-0.179240855402 ,
0.710363098267 ,
-0.299955787063 ,
-0.846206913428 ,
-0.737963238757 ,
0.290235476457 ,
-0.483921561117 ,
-0.017971051849 ,
-0.331233963522 ,
-0.272534991127 ,
0.619116788359 ,
0.873270701202 ,
-0.036930809214 ,
-0.872893192739 ,
0.625331637368 ,
0.562877100291 ,
-0.125641468110 ,
-0.267904333435 ,
0.730347030091 ,
0.307376714506 ,
-0.944416214197 ,
-0.994625647800 ,
0.894731395084 ,
0.495285224655 ,
0.369995826065 ,
0.496353427995 ,
-0.530400718459 ,
0.779598247927 ,
0.915014000367 ,
-0.141942210676 ,
-0.561329424915 ,
0.066678306912 ,
-0.174669773393 ,
-0.707654852884 ,
-0.543197230308 ,
0.340785664550 ,
0.351344217013 ,
0.089036693134 ,
-0.439092679028 ,
-0.352489353796 ,
-0.452370266454 ,
-0.064803463081 ,
-0.180224615352 ,
0.183607796445 ,
0.102685625017 ,
-0.792878830052 ,
0.309156946814 ,
0.094454517059 ,
0.613831906289 ,
0.862324691077 ,
-0.318424215317 ,
0.588457032498 ,
-0.394132346785 ,
0.804940509933 ,
0.620042982823 ,
0.606769997187 ,
0.242135711631 ,
-0.245375711727 ,
0.842410429580 ,
0.202230586261 ,
-0.722500270516 ,
-0.398400394748 ,
-0.249051877981 ,
0.756312648925 ,
0.783968570525 ,
0.467863343962 ,
-0.280572768474 ,
0.371540821986 ,
0.697680722689 ,
-0.033311962505 ,
0.011818350340 ,
-0.088946376964 ,
0.063696679274 ,
-0.826942113130 ,
0.067000057754 ,
0.896351304315 ,
0.779672621421 ,
0.493201742673 ,
-0.674490442035 ,
-0.954481599724 ,
0.456995265841 ,
-0.980454742471 ,
-0.496413197042 ,
-0.917140267219 ,
0.998622883065 ,
0.437472527805 ,
0.448988716010 ,
0.037592842255 ,
0.790337032285 ,
-0.126485073298 ,
-0.897129728848 ,
-0.265639515609 ,
-0.124183850079 ,
-0.313478933414 ,
0.691594762718 ,
-0.800620119600 ,
0.898249497424 ,
-0.334036314343 ,
-0.871235695640 ,
0.572296347131 ,
-0.558343652704 ,
-0.506055968817 ,
-0.249275001053 ,
-0.637054795494 ,
-0.826103616938 ,
0.812919722775 ,
-0.241011062966 ,
0.206662146529 ,
-0.612966379108 ,
0.511253767610 ,
-0.115922234730 ,
0.157037715143 ,
0.413723791676 ,
-0.995112094179 ,
-0.929062401123 ,
-0.392297409471 ,
0.405366332725 ,
-0.801547608985 ,
0.212366110918 ,
0.689278523194 ,
-0.397839193362 ,
-0.335054484707 ,
-0.173056020505 ,
-0.058608745867 ,
-0.571052300813 ,
-0.127656380969 ,
-0.451418376193 ,
-0.276936409842 ,
0.015348463655 ,
-0.880484071623 ,
-0.421115379877 ,
-0.268755316835 ,
0.979652563268 ,
0.854014523890 ,
-0.613743891159 ,
-0.993223175985 ,
-0.626625152385 ,
-0.324733074844 ,
-0.656497753406 ,
-0.576008084078 ,
0.060253099376 ,
0.587122352137 ,
-0.800700926301 ,
-0.598154793161 ,
0.420661775543 ,
0.258472591745 ,
0.521676579344 ,
-0.470455410564 ,
0.749582221417 ,
0.130662824930 ,
0.688491798814 ,
-0.292738781569 ,
0.142107640564 ,
-0.068597289805 ,
-0.270597134374 ,
0.247935020497 ,
0.070885744533 ,
-0.709060368890 ,
-0.647720165359 ,
-0.779242044962 ,
0.763545686230 ,
-0.337257501763 ,
0.690398285687 ,
0.297656022570 ,
-0.910846269381 ,
0.667763293119 ,
-0.979478406372 ,
0.762176254962 ,
-0.794796845118 ,
0.861720658521 ,
-0.939314663067 ,
-0.341131727134 ,
-0.234631503847 ,
0.683491898712 ,
-0.757127490885 ,
-0.482859220120 ,
0.680472760918 ,
-0.023922691221 ,
0.870913730287 ,
0.192597929925 ,
-0.916999111436 ,
0.646458696907 ,
-0.063099061739 ,
0.274373825631 ,
-0.201856265257 ,
-0.048690252605 ,
-0.648633790996 ,
-0.687427710315 ,
0.110810899079 ,
-0.102452836255 ,
-0.502939505961 ,
-0.294794664318 ,
0.110471421304 ,
0.239800346253 ,
-0.424001715513 ,
0.408918604032 ,
0.050773370666 ,
0.292731119478 ,
-0.498015905465 ,
0.761076298219 ,
-0.397710749818 ,
-0.403429552990 ,
0.459697993074 ,
-0.539400351192 ,
0.617051468969 ,
0.910016028625 ,
0.073562485923 ,
-0.162497821839 ,
0.415239183547 ,
-0.940500110351 ,
-0.987614867821 ,
0.984347983663 ,
0.948040421187 ,
-0.233379069096 ,
0.303050956777 ,
-0.508679580340 ,
-0.092993362594 ,
-0.133280787857 ,
-0.578572770369 ,
0.060192464265 ,
0.443284948000 ,
-0.843152297435 ,
0.311684302670 ,
0.510345554571 ,
-0.931331866137 ,
-0.202319486925 ,
-0.087366559574 ,
0.689533138141 ,
-0.505250928777 ,
0.098028825250 ,
-0.335210504270 ,
-0.939006185534 ,
-0.519623883614 ,
0.501160577343 ,
0.289120528836 ,
0.780624714887 ,
0.146064496736 ,
-0.622674544978 ,
-0.258599971896 ,
-0.715073198403 ,
-0.724457493235 ,
0.753951187294 ,
0.331077548223 ,
-0.562052844898 ,
0.345529028758 ,
-0.234108380354 ,
0.228365369852 ,
-0.204992105532 ,
-0.090402487456 ,
-0.267712459041 ,
0.545943767178 ,
-0.733665291241 ,
0.132831511535 ,
0.361154461906 ,
0.014386607386 ,
-0.003529319954 ,
0.935118689451 ,
-0.659757759997 ,
0.527359473141 ,
-0.780817278205 ,
0.579129744059 ,
0.692991817640 ,
0.913826835527 ,
0.385904471990 ,
0.874356979854 ,
0.227425572375 ,
0.475625709717 ,
-0.816457266191 ,
0.925735171069 ,
0.873298669374 ,
-0.739141891840 ,
-0.686251007540 ,
0.730570854512 ,
0.930670159848 ,
0.955870374830 ,
0.533633315588 ,
0.205646282524 ,
-0.696823903813 ,
0.688287101386 ,
0.292972664953 ,
-0.574285330872 ,
-0.893622943817 ,
-0.581649980707 ,
0.935651200996 ,
-0.264152873554 ,
0.998048492950 ,
0.924905343815 ,
-0.956841304961 ,
0.410203626454 ,
-0.038021678766 ,
0.900984369696 ,
-0.004655204000 ,
-0.335876668791 ,
-0.327969752059 ,
-0.001655328826 ,
-0.736535123208 ,
-0.884079976108 ,
-0.567732209011 ,
0.521690540262 ,
0.186948445022 ,
0.411936143311 ,
-0.152769745540 ,
-0.611644371569 ,
0.484081687374 ,
-0.165355503043 ,
-0.249914546086 ,
-0.488623902832 ,
0.264521509059 ,
-0.876442453600 ,
0.967439861436 ,
0.021127820981 ,
0.692174645161 ,
0.808062281551 ,
-0.068007504711 ,
0.246258981366 ,
0.173990729331 ,
-0.404270930546 ,
-0.624680971518 ,
-0.412839086521 ,
0.822684679058 ,
-0.453856072826 ,
-0.161641264826 ,
0.268314239419 ,
-0.457365793769 ,
-0.512935496700 ,
0.054899566520 ,
-0.556791041795 ,
0.595712385829 ,
-0.008340412978 ,
-0.018691186585 ,
-0.463204435943 ,
-0.616170492854 ,
-0.330666410418 ,
0.617168430112 ,
-0.938725801213 ,
-0.675339574471 ,
0.011043687890 ,
0.016719615807 ,
0.776315688587 ,
0.601272983793 ,
-0.508140683983 ,
0.277088230539 ,
-0.261049693645 ,
-0.156613297312 ,
0.887766734651 ,
-0.940515124092 ,
-0.169132236845 ,
0.179522000279 ,
-0.130484925730 ,
0.355333857480 ,
0.403612817727 ,
0.271643837883 ,
-0.058877345060 ,
0.495160269211 ,
0.879085473604 ,
0.724263579240 ,
-0.368598286930 ,
0.807340240712 ,
-0.247856396963 ,
-0.950076503340 ,
-0.543370789169 ,
0.710931906020 ,
0.480029847207 ,
0.607079433303 ,
-0.485685796945 ,
0.823545198130 ,
0.061340036225 ,
-0.378834728545 ,
0.827580381141 ,
0.336068946804 ,
0.192870958451 ,
0.412830782101 ,
0.287293284500 ,
0.053310716938 ,
0.014981664741 ,
-0.621994428060 ,
-0.723920158450 ,
0.741057443106 ,
-0.033589702426 ,
0.133130824749 ,
-0.820418670813 ,
0.490861632360 ,
-0.345218988900 ,
0.774403489294 ,
0.107391123346 ,
0.008486886265 ,
0.949810942555 ,
0.886820249260 ,
-0.015333174378 ,
-0.456180909243 ,
0.025704434486 ,
0.683046073653 ,
0.208960243273 ,
0.429743824165 ,
0.458588128446 ,
-0.518476563543 ,
-0.706965621283 ,
-0.482507220809 ,
0.513496051166 ,
-0.123481718094 ,
-0.360473176364 ,
0.134511201495 ,
0.156087571495 ,
-0.616566091036 ,
-0.696383865351 ,
0.947305671019 ,
-0.660846746889 ,
0.502009870644 ,
-0.933501439166 ,
-0.346210700718 ,
0.707782213022 ,
-0.925279899870 ,
0.826571646987 ,
-0.265940814861 ,
0.839105314560 ,
0.558966464985 ,
-0.415608491865 ,
0.994991185996 ,
0.239798753751 ,
-0.179240855402 ,
0.710363098267 ,
-0.299955787063 ,
-0.846206913428 ,
-0.737963238757 ,
0.290235476457 ,
-0.483921561117 ,
-0.017971051849 ,
-0.331233963522 ,
-0.272534991127 ,
0.619116788359 ,
0.873270701202 ,
-0.036930809214 ,
-0.872893192739 ,
0.625331637368 ,
0.562877100291 ,
-0.125641468110 ,
-0.267904333435 ,
0.730347030091 ,
0.307376714506 ,
-0.944416214197 ,
-0.994625647800 ,
0.894731395084 ,
0.495285224655 ,
0.369995826065 ,
0.496353427995 ,
-0.530400718459 ,
0.779598247927 ,
0.915014000367 ,
-0.141942210676 ,
-0.561329424915 ,
0.066678306912 ,
-0.174669773393 ,
-0.707654852884 ,
-0.543197230308 ,
0.340785664550 ,
0.351344217013 ,
0.089036693134 ,
-0.439092679028 ,
-0.352489353796 ,
-0.452370266454 ,
-0.064803463081 ,
-0.180224615352 ,
0.183607796445 ,
0.102685625017 ,
-0.792878830052 ,
0.309156946814 ,
0.094454517059 ,
0.613831906289 ,
0.862324691077 ,
-0.318424215317 ,
0.588457032498 ,
-0.394132346785 ,
0.804940509933 ,
0.620042982823 ,
0.606769997187 ,
0.242135711631 ,
-0.245375711727 ,
0.842410429580 ,
0.202230586261 ,
-0.722500270516 ,
-0.398400394748 ,
-0.249051877981 ,
0.756312648925 ,
0.783968570525 ,
0.467863343962 ,
-0.280572768474 ,
0.371540821986 ,
0.697680722689 ,
-0.033311962505 ,
0.011818350340 ,
-0.088946376964 ,
0.063696679274 ,
-0.826942113130 ,
0.067000057754 ,
0.896351304315 ,
0.779672621421 ,
0.493201742673 ,
-0.674490442035 ,
-0.954481599724 ,
0.456995265841 ,
-0.980454742471 ,
-0.496413197042 ,
-0.917140267219 ,
0.998622883065 ,
0.437472527805 ,
0.448988716010 ,
0.037592842255 ,
0.790337032285 ,
-0.126485073298 ,
-0.897129728848 ,
-0.265639515609 ,
-0.124183850079 ,
-0.313478933414 ,
0.691594762718 ,
-0.800620119600 ,
0.898249497424 ,
-0.334036314343 ,
-0.871235695640 ,
0.572296347131 ,
-0.558343652704 ,
-0.506055968817 ,
-0.249275001053 ,
-0.637054795494 ,
-0.826103616938 ,
0.812919722775 ,
-0.241011062966 ,
0.206662146529 ,
-0.612966379108 ,
0.511253767610 ,
-0.115922234730 ,
0.157037715143 ,
0.413723791676 ,
-0.995112094179 ,
-0.929062401123 ,
-0.392297409471 ,
0.405366332725 ,
-0.801547608985 ,
0.212366110918 ,
0.689278523194 ,
-0.397839193362 ,
-0.335054484707 ,
-0.173056020505 ,
-0.058608745867 ,
-0.571052300813 ,
-0.127656380969 ,
-0.451418376193 ,
-0.276936409842 ,
0.015348463655 ,
-0.880484071623 ,
-0.421115379877 ,
-0.268755316835 ,
0.979652563268 ,
0.854014523890 ,
-0.613743891159 ,
-0.993223175985 ,
-0.626625152385 ,
-0.324733074844 ,
-0.656497753406 ,
-0.576008084078 ,
0.060253099376 ,
0.587122352137 ,
-0.800700926301 ,
-0.598154793161 ,
0.420661775543 ,
0.258472591745 ,
0.521676579344 ,
-0.470455410564 ,
0.749582221417 ,
0.130662824930 ,
0.688491798814 ,
-0.292738781569 ,
0.142107640564 ,
-0.068597289805 ,
-0.270597134374 ,
0.247935020497 ,
0.070885744533 ,
-0.709060368890 ,
-0.647720165359 ,
-0.779242044962 ,
0.763545686230 ,
-0.337257501763 ,
0.690398285687 ,
0.297656022570 ,
-0.910846269381 ,
0.667763293119 ,
-0.979478406372 ,
0.762176254962 ,
-0.794796845118 ,
0.861720658521 ,
-0.939314663067 ,
-0.341131727134 ,
-0.234631503847 ,
0.683491898712 ,
-0.757127490885 ,
-0.482859220120 ,
0.680472760918 ,
-0.023922691221 ,
0.870913730287 ,
0.192597929925 ,
-0.916999111436 ,
0.646458696907 ,
-0.063099061739 ,
0.274373825631 ,
-0.201856265257 ,
-0.048690252605 ,
-0.648633790996 ,
-0.687427710315 ,
0.110810899079 ,
-0.102452836255 ,
-0.502939505961 ,
-0.294794664318 ,
0.110471421304 ,
0.239800346253 ,
-0.424001715513 ,
0.408918604032 ,
0.050773370666 ,
0.292731119478 ,
-0.498015905465 ,
0.761076298219 ,
-0.397710749818 ,
-0.403429552990 ,
0.459697993074 ,
-0.539400351192 ,
0.617051468969 ,
0.910016028625 ,
0.073562485923 ,
-0.162497821839 ,
0.415239183547 ,
-0.940500110351 ,
-0.987614867821 ,
0.984347983663 ,
0.948040421187 ,
-0.233379069096 ,
0.303050956777 ,
-0.508679580340 ,
-0.092993362594 ,
-0.133280787857 ,
-0.578572770369 ,
0.060192464265 ,
0.443284948000 ,
-0.843152297435 ,
0.311684302670 ,
0.510345554571 ,
-0.931331866137 ,
-0.202319486925 ,
-0.087366559574 ,
0.689533138141 ,
-0.505250928777 ,
0.098028825250 ,
-0.335210504270 ,
-0.939006185534 ,
-0.519623883614 ,
0.501160577343 ,
0.289120528836 ,
0.780624714887 ,
0.146064496736 ,
-0.622674544978 ,
-0.258599971896 ,
-0.715073198403 ,
-0.724457493235 ,
0.753951187294 ,
0.331077548223 ,
-0.562052844898 ,
0.345529028758 ,
-0.234108380354 ,
0.228365369852 ,
-0.204992105532 ,
-0.090402487456 ,
-0.267712459041 ,
0.545943767178 ,
-0.733665291241 ,
0.132831511535 ,
0.361154461906 ,
0.014386607386 ,
-0.003529319954 ,
0.935118689451 ,
-0.659757759997 ,
0.527359473141 ,
-0.780817278205 ,
0.579129744059 ,
0.692991817640 ,
0.913826835527 ,
0.385904471990 ,
0.874356979854 ,
0.227425572375 ,
0.475625709717 ,
-0.816457266191 ,
0.925735171069 ,
0.873298669374 ,
-0.739141891840 ,
-0.686251007540 ,
0.730570854512 ,
0.930670159848 ,
0.955870374830 ,
0.533633315588 ,
0.205646282524 ,
-0.696823903813 ,
0.688287101386 ,
0.292972664953 ,
-0.574285330872 ,
-0.893622943817 ,
-0.581649980707 ,
0.935651200996 ,
-0.264152873554 ,
0.998048492950 ,
0.924905343815 ,
-0.956841304961 ,
0.410203626454 ,
-0.038021678766 ,
0.900984369696 ,
-0.004655204000 ,
-0.335876668791 ,
-0.327969752059 ,
-0.001655328826 ,
-0.736535123208 ,
-0.884079976108 ,
-0.567732209011 ,
0.521690540262 ,
0.186948445022 ,
0.411936143311 ,
-0.152769745540  
};

 #endif
