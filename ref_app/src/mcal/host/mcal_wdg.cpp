///////////////////////////////////////////////////////////////////////////////
//  Copyright Christopher Kormanyos 2007 - 2018.
//  Distributed under the Boost Software License,
//  Version 1.0. (See accompanying file LICENSE_1_0.txt
//  or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#include <mcal_wdg_watchdog.h>

auto mcal::wdg::init(const config_type*) -> void // NOLINT(readability-named-parameter)
{
  // Subroutine is empty on purpose.
}

auto mcal::wdg::secure::trigger() -> void
{
  mcal::wdg::watchdog<mcal::wdg::watchdog_base::base_timer_type::seconds(2U)>::my_watchdog.reset_watchdog_timer();
}
