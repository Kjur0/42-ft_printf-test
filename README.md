*This project has been created as part of the 42 curriculum by **kjurkows***

# `ft_printf-test`

**IT IS NOT NORM COMPLIANT**

## Description

`ft_printf-test` is a testing suite for `ft_printf`. Used for testing all formatters and flags using `gtest` (Google Test).

See [Detailed description](#detailed-description) for list of tests.

## Instructions

### Before testing

1. clone your `ft_printf` into `ft_printf` folder
2. In `Makefile`, set `FT_PRINTF_INC` to the path of your `ft_printf/includes` folder (or any other folder with `ft_printf.h` in it)

### Testing mandatory part

```shell
./test.sh
```

### Testing bonus part

```shell
./test.sh bonus
```

## Resources

* [GoogleTest User’s Guide](https://google.github.io/googletest/)

### AI Usage

> [!IMPORTANT]
> All AI code was used after careful analysis.

#### Google Gemini

Gemini was used while deciding what flags to test with a given formatter.

#### GitHub Copilot

AI inline suggestions were used for repetitive tasks, such as:
* Writing `#include`s
* Rewriting tests for different formatters (using existing tests from another formatter as a template)

## Detailed description

> [!TIP]
> `gtest` might ignore `%` in test names  
> Most tests focus around one formatter/flag  
> All tests for bonus are suffixed `_bonus`

[^b]: Bonus tests

Bellow is the list of all tests:

### Norminette

| Name    | Description |
|---------|-------------|
| `norme` | Norm check  |

### `string`

| Name      | Description       |
|-----------|-------------------|
| `basic`   | No formatter      |
| `invalid` | Invalid formatter |

### `%c` (`c`)

| Name              | What is checked  |
|-------------------|------------------|
| `basic`           | simple character |
| `align_right`[^b] | min-width number |
| `align_left`[^b]  | `-` flag+number  |
| `less_width`[^b]  | `0`              |

### `%s` (`s`)

| Name                 | What is checked  |
|----------------------|------------------|
| `basic`              | simple string    |
| `null`               | `nullptr`        |
| `align_right`[^b]    | min-width number |
| `align_left`[^b]     | `-` flag+number  |
| `less_width`[^b]     | `%5s`            |
| `precision`[^b]      | `.` flag+numbers |
| `null_precision`[^b] | `NULL` with `.`  |

### `%p` (`p`)

| Name                    | What is checked  |
|-------------------------|------------------|
| `basic`                 | simple pointer   |
| `null`                  | `nullptr`        |
| `minmax`                | min/max pointer  |
| `align_right`[^b]       | min-width number |
| `align_left`[^b]        | `-` flag+number  |
| `less_width`[^b]        | `%2p`            |
| `precision`[^b]         | `.` flag+numbers |
| `0`[^b]                 | `0` flag+number  |
| `plus_space`[^b]        | `+`/` ` flags    |
| `mixed`[^b]             | `% -020.10p`     |
| `null_precision`[^b]    | `NULL` with `.`  |

### `%d`/`%i` (`di`)

| Name              | What is checked           |
|-------------------|---------------------------|
| `basic`           | simple integer            |
| `minmax`          | min/max integer           |
| `align_right`[^b] | min-width number          |
| `align_left`[^b]  | `-` flag+number           |
| `less_width`[^b]  | `%1d`/`%1i`               |
| `precision`[^b]   | `.` flag+numbers          |
| `0`[^b]           | `0` flag+number           |
| `plus_space`[^b]  | `+`/` ` flags             |
| `mixed`[^b]       | `% -020.10d`/`% -020.10i` |
| `value0`[^b]      | `0` value with `.`        |

### `%u` (`u`)

| Name              | What is checked          |
|-------------------|--------------------------|
| `basic`           | simple unsigned integer  |
| `minmax`          | min/max unsigned integer |
| `align_right`[^b] | min-width number         |
| `align_left`[^b]  | `-` flag+number          |
| `less_width`[^b]  | `%1u`                    |
| `precision`[^b]   | `.` flag+numbers         |
| `0`[^b]           | `0` flag+number          |
| `plus_space`[^b]  | `+`/` ` flags            |
| `mixed`[^b]       | `% -020.10u`             |
| `value0`[^b]      | `0` value with `.`       |

### `%x`/`%X` (`x`)

| Name              | What is checked           |
|-------------------|---------------------------|
| `basic`           | simple hexadecimal        |
| `minmax`          | min/max hexadecimal       |
| `align_right`[^b] | min-width number          |
| `align_left`[^b]  | `-` flag+number           |
| `less_width`[^b]  | `%1x`/`%1X`               |
| `precision`[^b]   | `.` flag+numbers          |
| `hash`[^b]        | `#` flag+number           |
| `0`[^b]           | `0` flag+number           |
| `plus_space`[^b]  | `+`/` ` flags             |
| `mixed`[^b]       | `% -020.10x`/`% -020.10X` |
| `value0`[^b]      | `0` value with `.`        |

### `%%` (`percent`)

| Name        | What is checked  |
|-------------|------------------|
| `basic`     | `%%`             |
| `width`[^b] | min-width number |
