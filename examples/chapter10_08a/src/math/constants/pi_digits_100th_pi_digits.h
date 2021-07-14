///////////////////////////////////////////////////////////////////////////////
//  Copyright Christopher Kormanyos 2020.
//  Distributed under the Boost Software License,
//  Version 1.0. (See accompanying file LICENSE_1_0.txt
//  or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#ifndef PI_DIGITS_100TH_PI_DIGITS_2020_05_10_H_
  #define PI_DIGITS_100TH_PI_DIGITS_2020_05_10_H_

  #include <cstdint>

  #include <mcal_memory_progmem.h>
  #include <mcal_memory/mcal_memory_progmem_array.h>

  namespace math { namespace constants {

  // This is a hard-coded data file. Please do not edit this file.

  // The data in this file list the zero-based 100th digits
  // of pi, where digit 0 is the leading 3.

  template<const mcal_progmem_uintptr_t>
  struct pi_digits_100th_pi_digits
  {
    using const_pointer = const void*;

    static const_pointer pi_digits_control() noexcept = delete;
  };

  template<>
  struct pi_digits_100th_pi_digits<1012U>
  {
    using array_type    = mcal::memory::progmem::array<std::uint8_t, mcal_progmem_uintptr_t(UINT32_C(1012))>;
    using const_pointer = typename array_type::const_pointer;

    static const_pointer pi_digits_control() noexcept
    {
      static const array_type value MY_PROGMEM =
      {{
        3, // : 0

        9, // : 100
        6, // : 200
        3, // : 300
        4, // : 400
        2, // : 500
        2, // : 600
        5, // : 700
        9, // : 800
        3, // : 900
        9, // : 1000

        1, // : 1100
        2, // : 1200
        2, // : 1300
        9, // : 1400
        5, // : 1500
        0, // : 1600
        3, // : 1700
        3, // : 1800
        3, // : 1900
        9, // : 2000

        3, // : 2100
        2, // : 2200
        8, // : 2300
        6, // : 2400
        5, // : 2500
        8, // : 2600
        4, // : 2700
        4, // : 2800
        7, // : 2900
        1, // : 3000

        5, // : 3100
        6, // : 3200
        7, // : 3300
        6, // : 3400
        2, // : 3500
        5, // : 3600
        3, // : 3700
        6, // : 3800
        8, // : 3900
        6, // : 4000

        5, // : 4100
        0, // : 4200
        0, // : 4300
        3, // : 4400
        1, // : 4500
        1, // : 4600
        3, // : 4700
        6, // : 4800
        3, // : 4900
        1, // : 5000

        5, // : 5100
        7, // : 5200
        8, // : 5300
        2, // : 5400
        7, // : 5500
        7, // : 5600
        3, // : 5700
        5, // : 5800
        3, // : 5900
        0, // : 6000

        5, // : 6100
        7, // : 6200
        5, // : 6300
        0, // : 6400
        7, // : 6500
        0, // : 6600
        1, // : 6700
        7, // : 6800
        4, // : 6900
        7, // : 7000

        4, // : 7100
        2, // : 7200
        5, // : 7300
        8, // : 7400
        6, // : 7500
        2, // : 7600
        0, // : 7700
        6, // : 7800
        7, // : 7900
        7, // : 8000

        8, // : 8100
        1, // : 8200
        6, // : 8300
        8, // : 8400
        8, // : 8500
        6, // : 8600
        2, // : 8700
        2, // : 8800
        7, // : 8900
        5, // : 9000

        5, // : 9100
        8, // : 9200
        1, // : 9300
        7, // : 9400
        4, // : 9500
        4, // : 9600
        8, // : 9700
        3, // : 9800
        1, // : 9900
        8, // : 10000

        5, // : 10100
        1, // : 10200
        5, // : 10300
        0, // : 10400
        3, // : 10500
        9, // : 10600
        8, // : 10700
        3, // : 10800
        4, // : 10900
        1, // : 11000

        0, // : 11100
        2, // : 11200
        7, // : 11300
        5, // : 11400
        2, // : 11500
        3, // : 11600
        8, // : 11700
        6, // : 11800
        8, // : 11900
        0, // : 12000

        0, // : 12100
        5, // : 12200
        0, // : 12300
        5, // : 12400
        1, // : 12500
        8, // : 12600
        1, // : 12700
        3, // : 12800
        0, // : 12900
        9, // : 13000

        8, // : 13100
        6, // : 13200
        3, // : 13300
        0, // : 13400
        6, // : 13500
        3, // : 13600
        4, // : 13700
        8, // : 13800
        7, // : 13900
        3, // : 14000

        2, // : 14100
        4, // : 14200
        8, // : 14300
        6, // : 14400
        0, // : 14500
        8, // : 14600
        5, // : 14700
        4, // : 14800
        6, // : 14900
        5, // : 15000

        6, // : 15100
        1, // : 15200
        6, // : 15300
        4, // : 15400
        1, // : 15500
        3, // : 15600
        7, // : 15700
        4, // : 15800
        5, // : 15900
        0, // : 16000

        1, // : 16100
        4, // : 16200
        8, // : 16300
        2, // : 16400
        9, // : 16500
        1, // : 16600
        7, // : 16700
        6, // : 16800
        2, // : 16900
        5, // : 17000

        5, // : 17100
        1, // : 17200
        6, // : 17300
        1, // : 17400
        3, // : 17500
        8, // : 17600
        3, // : 17700
        0, // : 17800
        4, // : 17900
        4, // : 18000

        1, // : 18100
        8, // : 18200
        3, // : 18300
        2, // : 18400
        5, // : 18500
        5, // : 18600
        5, // : 18700
        7, // : 18800
        2, // : 18900
        2, // : 19000

        2, // : 19100
        9, // : 19200
        7, // : 19300
        6, // : 19400
        1, // : 19500
        7, // : 19600
        9, // : 19700
        6, // : 19800
        1, // : 19900
        8, // : 20000

        0, // : 20100
        7, // : 20200
        1, // : 20300
        9, // : 20400
        9, // : 20500
        0, // : 20600
        4, // : 20700
        7, // : 20800
        3, // : 20900
        2, // : 21000

        5, // : 21100
        7, // : 21200
        8, // : 21300
        3, // : 21400
        1, // : 21500
        3, // : 21600
        2, // : 21700
        1, // : 21800
        7, // : 21900
        7, // : 22000

        1, // : 22100
        4, // : 22200
        6, // : 22300
        0, // : 22400
        7, // : 22500
        3, // : 22600
        4, // : 22700
        2, // : 22800
        0, // : 22900
        1, // : 23000

        3, // : 23100
        3, // : 23200
        6, // : 23300
        6, // : 23400
        4, // : 23500
        8, // : 23600
        9, // : 23700
        7, // : 23800
        1, // : 23900
        9, // : 24000

        2, // : 24100
        2, // : 24200
        4, // : 24300
        0, // : 24400
        8, // : 24500
        4, // : 24600
        1, // : 24700
        8, // : 24800
        7, // : 24900
        7, // : 25000

        4, // : 25100
        0, // : 25200
        4, // : 25300
        0, // : 25400
        5, // : 25500
        5, // : 25600
        4, // : 25700
        3, // : 25800
        9, // : 25900
        8, // : 26000

        2, // : 26100
        5, // : 26200
        0, // : 26300
        5, // : 26400
        1, // : 26500
        5, // : 26600
        2, // : 26700
        5, // : 26800
        2, // : 26900
        1, // : 27000

        0, // : 27100
        1, // : 27200
        4, // : 27300
        9, // : 27400
        4, // : 27500
        5, // : 27600
        3, // : 27700
        3, // : 27800
        2, // : 27900
        5, // : 28000

        9, // : 28100
        5, // : 28200
        9, // : 28300
        9, // : 28400
        0, // : 28500
        8, // : 28600
        3, // : 28700
        6, // : 28800
        7, // : 28900
        3, // : 29000

        8, // : 29100
        6, // : 29200
        1, // : 29300
        3, // : 29400
        6, // : 29500
        4, // : 29600
        7, // : 29700
        5, // : 29800
        8, // : 29900
        8, // : 30000

        1, // : 30100
        5, // : 30200
        9, // : 30300
        1, // : 30400
        7, // : 30500
        1, // : 30600
        8, // : 30700
        1, // : 30800
        1, // : 30900
        2, // : 31000

        4, // : 31100
        9, // : 31200
        1, // : 31300
        4, // : 31400
        5, // : 31500
        7, // : 31600
        8, // : 31700
        4, // : 31800
        9, // : 31900
        9, // : 32000

        8, // : 32100
        6, // : 32200
        9, // : 32300
        9, // : 32400
        1, // : 32500
        5, // : 32600
        2, // : 32700
        8, // : 32800
        9, // : 32900
        0, // : 33000

        6, // : 33100
        8, // : 33200
        6, // : 33300
        9, // : 33400
        8, // : 33500
        0, // : 33600
        3, // : 33700
        6, // : 33800
        2, // : 33900
        8, // : 34000

        2, // : 34100
        9, // : 34200
        8, // : 34300
        2, // : 34400
        4, // : 34500
        8, // : 34600
        1, // : 34700
        7, // : 34800
        8, // : 34900
        2, // : 35000

        0, // : 35100
        6, // : 35200
        0, // : 35300
        9, // : 35400
        5, // : 35500
        0, // : 35600
        7, // : 35700
        6, // : 35800
        9, // : 35900
        4, // : 36000

        1, // : 36100
        6, // : 36200
        9, // : 36300
        3, // : 36400
        0, // : 36500
        5, // : 36600
        5, // : 36700
        7, // : 36800
        9, // : 36900
        9, // : 37000

        0, // : 37100
        6, // : 37200
        5, // : 37300
        1, // : 37400
        5, // : 37500
        6, // : 37600
        1, // : 37700
        8, // : 37800
        6, // : 37900
        3, // : 38000

        8, // : 38100
        2, // : 38200
        6, // : 38300
        7, // : 38400
        7, // : 38500
        1, // : 38600
        5, // : 38700
        0, // : 38800
        1, // : 38900
        6, // : 39000

        0, // : 39100
        6, // : 39200
        6, // : 39300
        9, // : 39400
        0, // : 39500
        7, // : 39600
        0, // : 39700
        9, // : 39800
        5, // : 39900
        1, // : 40000

        5, // : 40100
        6, // : 40200
        9, // : 40300
        7, // : 40400
        7, // : 40500
        7, // : 40600
        3, // : 40700
        5, // : 40800
        7, // : 40900
        7, // : 41000

        8, // : 41100
        9, // : 41200
        6, // : 41300
        9, // : 41400
        0, // : 41500
        7, // : 41600
        7, // : 41700
        0, // : 41800
        9, // : 41900
        7, // : 42000

        4, // : 42100
        1, // : 42200
        3, // : 42300
        5, // : 42400
        2, // : 42500
        6, // : 42600
        5, // : 42700
        3, // : 42800
        0, // : 42900
        3, // : 43000

        6, // : 43100
        0, // : 43200
        2, // : 43300
        3, // : 43400
        3, // : 43500
        0, // : 43600
        3, // : 43700
        9, // : 43800
        1, // : 43900
        1, // : 44000

        5, // : 44100
        3, // : 44200
        4, // : 44300
        1, // : 44400
        0, // : 44500
        4, // : 44600
        3, // : 44700
        5, // : 44800
        4, // : 44900
        7, // : 45000

        7, // : 45100
        8, // : 45200
        2, // : 45300
        7, // : 45400
        2, // : 45500
        8, // : 45600
        4, // : 45700
        1, // : 45800
        1, // : 45900
        8, // : 46000

        7, // : 46100
        9, // : 46200
        4, // : 46300
        0, // : 46400
        6, // : 46500
        2, // : 46600
        8, // : 46700
        5, // : 46800
        1, // : 46900
        3, // : 47000

        4, // : 47100
        4, // : 47200
        4, // : 47300
        3, // : 47400
        4, // : 47500
        9, // : 47600
        8, // : 47700
        6, // : 47800
        1, // : 47900
        9, // : 48000

        9, // : 48100
        0, // : 48200
        9, // : 48300
        7, // : 48400
        9, // : 48500
        4, // : 48600
        2, // : 48700
        9, // : 48800
        3, // : 48900
        8, // : 49000

        6, // : 49100
        0, // : 49200
        2, // : 49300
        3, // : 49400
        5, // : 49500
        8, // : 49600
        6, // : 49700
        9, // : 49800
        8, // : 49900
        1, // : 50000

        9, // : 50100
        4, // : 50200
        5, // : 50300
        5, // : 50400
        9, // : 50500
        4, // : 50600
        1, // : 50700
        6, // : 50800
        7, // : 50900
        9, // : 51000

        7, // : 51100
        2, // : 51200
        3, // : 51300
        2, // : 51400
        3, // : 51500
        6, // : 51600
        2, // : 51700
        9, // : 51800
        5, // : 51900
        9, // : 52000

        4, // : 52100
        8, // : 52200
        4, // : 52300
        9, // : 52400
        7, // : 52500
        6, // : 52600
        3, // : 52700
        8, // : 52800
        5, // : 52900
        7, // : 53000

        1, // : 53100
        5, // : 53200
        1, // : 53300
        6, // : 53400
        1, // : 53500
        1, // : 53600
        1, // : 53700
        4, // : 53800
        4, // : 53900
        2, // : 54000

        2, // : 54100
        0, // : 54200
        5, // : 54300
        5, // : 54400
        8, // : 54500
        3, // : 54600
        6, // : 54700
        8, // : 54800
        1, // : 54900
        7, // : 55000

        3, // : 55100
        6, // : 55200
        6, // : 55300
        6, // : 55400
        4, // : 55500
        2, // : 55600
        2, // : 55700
        4, // : 55800
        7, // : 55900
        2, // : 56000

        4, // : 56100
        5, // : 56200
        3, // : 56300
        2, // : 56400
        9, // : 56500
        8, // : 56600
        2, // : 56700
        6, // : 56800
        0, // : 56900
        4, // : 57000

        7, // : 57100
        1, // : 57200
        5, // : 57300
        1, // : 57400
        9, // : 57500
        2, // : 57600
        0, // : 57700
        7, // : 57800
        3, // : 57900
        9, // : 58000

        3, // : 58100
        3, // : 58200
        2, // : 58300
        0, // : 58400
        6, // : 58500
        3, // : 58600
        0, // : 58700
        8, // : 58800
        9, // : 58900
        5, // : 59000

        6, // : 59100
        1, // : 59200
        3, // : 59300
        0, // : 59400
        6, // : 59500
        3, // : 59600
        7, // : 59700
        2, // : 59800
        2, // : 59900
        4, // : 60000

        4, // : 60100
        3, // : 60200
        9, // : 60300
        6, // : 60400
        7, // : 60500
        7, // : 60600
        9, // : 60700
        5, // : 60800
        8, // : 60900
        6, // : 61000

        9, // : 61100
        0, // : 61200
        8, // : 61300
        5, // : 61400
        1, // : 61500
        8, // : 61600
        4, // : 61700
        8, // : 61800
        9, // : 61900
        0, // : 62000

        5, // : 62100
        0, // : 62200
        1, // : 62300
        6, // : 62400
        6, // : 62500
        3, // : 62600
        3, // : 62700
        0, // : 62800
        4, // : 62900
        4, // : 63000

        6, // : 63100
        3, // : 63200
        8, // : 63300
        0, // : 63400
        0, // : 63500
        8, // : 63600
        8, // : 63700
        7, // : 63800
        7, // : 63900
        4, // : 64000

        7, // : 64100
        5, // : 64200
        2, // : 64300
        5, // : 64400
        8, // : 64500
        8, // : 64600
        1, // : 64700
        1, // : 64800
        9, // : 64900
        1, // : 65000

        1, // : 65100
        1, // : 65200
        7, // : 65300
        6, // : 65400
        2, // : 65500
        4, // : 65600
        0, // : 65700
        4, // : 65800
        5, // : 65900
        2, // : 66000

        5, // : 66100
        8, // : 66200
        6, // : 66300
        7, // : 66400
        2, // : 66500
        1, // : 66600
        4, // : 66700
        4, // : 66800
        2, // : 66900
        3, // : 67000

        9, // : 67100
        7, // : 67200
        2, // : 67300
        8, // : 67400
        1, // : 67500
        6, // : 67600
        1, // : 67700
        2, // : 67800
        9, // : 67900
        6, // : 68000

        7, // : 68100
        3, // : 68200
        8, // : 68300
        8, // : 68400
        0, // : 68500
        6, // : 68600
        9, // : 68700
        2, // : 68800
        9, // : 68900
        4, // : 69000

        4, // : 69100
        3, // : 69200
        8, // : 69300
        9, // : 69400
        8, // : 69500
        9, // : 69600
        6, // : 69700
        7, // : 69800
        2, // : 69900
        5, // : 70000

        4, // : 70100
        7, // : 70200
        3, // : 70300
        5, // : 70400
        4, // : 70500
        0, // : 70600
        0, // : 70700
        0, // : 70800
        7, // : 70900
        3, // : 71000

        3, // : 71100
        7, // : 71200
        3, // : 71300
        6, // : 71400
        9, // : 71500
        8, // : 71600
        3, // : 71700
        6, // : 71800
        3, // : 71900
        6, // : 72000

        8, // : 72100
        7, // : 72200
        9, // : 72300
        2, // : 72400
        1, // : 72500
        7, // : 72600
        5, // : 72700
        2, // : 72800
        4, // : 72900
        1, // : 73000

        1, // : 73100
        5, // : 73200
        6, // : 73300
        9, // : 73400
        5, // : 73500
        1, // : 73600
        3, // : 73700
        1, // : 73800
        7, // : 73900
        9, // : 74000

        9, // : 74100
        3, // : 74200
        1, // : 74300
        4, // : 74400
        4, // : 74500
        1, // : 74600
        7, // : 74700
        6, // : 74800
        1, // : 74900
        9, // : 75000

        3, // : 75100
        7, // : 75200
        4, // : 75300
        6, // : 75400
        4, // : 75500
        6, // : 75600
        9, // : 75700
        6, // : 75800
        6, // : 75900
        6, // : 76000

        8, // : 76100
        2, // : 76200
        3, // : 76300
        2, // : 76400
        3, // : 76500
        0, // : 76600
        3, // : 76700
        5, // : 76800
        0, // : 76900
        7, // : 77000

        3, // : 77100
        5, // : 77200
        2, // : 77300
        1, // : 77400
        4, // : 77500
        4, // : 77600
        1, // : 77700
        7, // : 77800
        0, // : 77900
        4, // : 78000

        8, // : 78100
        1, // : 78200
        4, // : 78300
        4, // : 78400
        2, // : 78500
        7, // : 78600
        0, // : 78700
        9, // : 78800
        9, // : 78900
        0, // : 79000

        3, // : 79100
        2, // : 79200
        9, // : 79300
        3, // : 79400
        3, // : 79500
        8, // : 79600
        9, // : 79700
        5, // : 79800
        7, // : 79900
        6, // : 80000

        9, // : 80100
        6, // : 80200
        4, // : 80300
        8, // : 80400
        3, // : 80500
        7, // : 80600
        5, // : 80700
        3, // : 80800
        5, // : 80900
        3, // : 81000

        7, // : 81100
        1, // : 81200
        6, // : 81300
        6, // : 81400
        0, // : 81500
        0, // : 81600
        1, // : 81700
        9, // : 81800
        9, // : 81900
        2, // : 82000

        9, // : 82100
        1, // : 82200
        1, // : 82300
        6, // : 82400
        4, // : 82500
        3, // : 82600
        5, // : 82700
        4, // : 82800
        1, // : 82900
        1, // : 83000

        8, // : 83100
        0, // : 83200
        3, // : 83300
        3, // : 83400
        8, // : 83500
        4, // : 83600
        8, // : 83700
        5, // : 83800
        6, // : 83900
        9, // : 84000

        7, // : 84100
        4, // : 84200
        7, // : 84300
        4, // : 84400
        9, // : 84500
        6, // : 84600
        6, // : 84700
        8, // : 84800
        4, // : 84900
        9, // : 85000

        1, // : 85100
        5, // : 85200
        0, // : 85300
        7, // : 85400
        5, // : 85500
        9, // : 85600
        0, // : 85700
        0, // : 85800
        9, // : 85900
        5, // : 86000

        5, // : 86100
        2, // : 86200
        8, // : 86300
        6, // : 86400
        4, // : 86500
        9, // : 86600
        0, // : 86700
        9, // : 86800
        6, // : 86900
        5, // : 87000

        9, // : 87100
        4, // : 87200
        7, // : 87300
        4, // : 87400
        7, // : 87500
        1, // : 87600
        6, // : 87700
        0, // : 87800
        8, // : 87900
        3, // : 88000

        3, // : 88100
        5, // : 88200
        5, // : 88300
        9, // : 88400
        2, // : 88500
        6, // : 88600
        9, // : 88700
        6, // : 88800
        2, // : 88900
        6, // : 89000

        3, // : 89100
        4, // : 89200
        8, // : 89300
        1, // : 89400
        7, // : 89500
        9, // : 89600
        0, // : 89700
        6, // : 89800
        5, // : 89900
        0, // : 90000

        4, // : 90100
        5, // : 90200
        7, // : 90300
        1, // : 90400
        4, // : 90500
        2, // : 90600
        9, // : 90700
        8, // : 90800
        9, // : 90900
        4, // : 91000

        5, // : 91100
        4, // : 91200
        4, // : 91300
        5, // : 91400
        5, // : 91500
        3, // : 91600
        0, // : 91700
        9, // : 91800
        5, // : 91900
        1, // : 92000

        5, // : 92100
        3, // : 92200
        1, // : 92300
        8, // : 92400
        7, // : 92500
        9, // : 92600
        3, // : 92700
        5, // : 92800
        8, // : 92900
        9, // : 93000

        8, // : 93100
        4, // : 93200
        3, // : 93300
        9, // : 93400
        3, // : 93500
        5, // : 93600
        3, // : 93700
        4, // : 93800
        4, // : 93900
        4, // : 94000

        7, // : 94100
        6, // : 94200
        5, // : 94300
        5, // : 94400
        3, // : 94500
        2, // : 94600
        4, // : 94700
        3, // : 94800
        9, // : 94900
        5, // : 95000

        7, // : 95100
        2, // : 95200
        9, // : 95300
        0, // : 95400
        4, // : 95500
        1, // : 95600
        8, // : 95700
        2, // : 95800
        4, // : 95900
        9, // : 96000

        0, // : 96100
        6, // : 96200
        2, // : 96300
        8, // : 96400
        3, // : 96500
        4, // : 96600
        5, // : 96700
        9, // : 96800
        8, // : 96900
        5, // : 97000

        3, // : 97100
        9, // : 97200
        5, // : 97300
        6, // : 97400
        9, // : 97500
        6, // : 97600
        6, // : 97700
        8, // : 97800
        3, // : 97900
        3, // : 98000

        4, // : 98100
        0, // : 98200
        8, // : 98300
        5, // : 98400
        9, // : 98500
        2, // : 98600
        0, // : 98700
        0, // : 98800
        1, // : 98900
        0, // : 99000

        5, // : 99100
        7, // : 99200
        9, // : 99300
        6, // : 99400
        9, // : 99500
        1, // : 99600
        7, // : 99700
        5, // : 99800
        9, // : 99900
        6, // : 100000

        7, // : 100100
        3, // : 100200
        7, // : 100300
        3, // : 100400
        4, // : 100500
        2, // : 100600
        2, // : 100700
        7, // : 100800
        5, // : 100900
        0, // : 101000

        0, // : 101100
      }};

      return value.data();
    }
  };

  } } // namespace math::constants

#endif // PI_DIGITS_100TH_PI_DIGITS_2020_05_10_H_
