
#define FAST_MATH_IMPLEMENT_SPECIALIZED_SQRT

#include <app/benchmark/app_benchmark.h>
#include <app/benchmark/app_benchmark_detail.h>
#include <math/fast_math/fast_math.h>

using float_type = fast_math::float32_t;

extern float_type xx;
extern float_type yy;

bool app::benchmark::run_fast_math()
{
  static bool toggle_test_case;

  bool result_is_ok;

  if(toggle_test_case != true)
  {
    toggle_test_case = true;

    yy = fast_math::exp(xx);

    result_is_ok = detail::is_close_fraction(yy, 10.381236562731844796F, 1.0E-03F);
  }
  else
  {
    toggle_test_case = false;

    yy = fast_math::sqrt(xx);

    result_is_ok = detail::is_close_fraction(yy, 1.5297058540778354490F, 2.0E-03F);
  }

  return result_is_ok;
}

float_type xx = 2.34F;
float_type yy;
