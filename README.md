*This project has been created as part of the 42 curriculum by **kjurkows***

# `ft_printf-test`

**IT IS NOT NORM COMPLIANT**

## Description

`ft_printf-test` is a testing suite for `ft_printf`. Used for testing all formatters and flags using `gtest` (Google Test).

See [Detailed description](#detailed-description) for list of tests.

## Instructions

### Before testing

clone your `ft_printf` into `ft_printf` folder

### Running all tests

```shell
./test.sh
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

Bellow is the list of all tests:

### Norminette

| Name    | Description |
|---------|-------------|
| `norme` | Norm check  |

### `string`

| Name    | Description  |
|---------|--------------|
| `basic` | No formatter |

### `%c` (`c`)

| Name          | What is checked  |
|---------------|------------------|
| `basic`       | simple character |
| `align_right` | min-width number |
| `align_left`  | `-` flag+number  |
| `less_width`  | `0`              |

### `%s` (`s`)

| Name          | What is checked  |
|---------------|------------------|
| `basic`       | simple string    |
| `align_right` | min-width number |
| `align_left`  | `-` flag+number  |
| `less_width`  | `%5s`            |
| `precision`   | `.` flag+numbers |

### `%p` (`p`)

| Name                    | What is checked  |
|-------------------------|------------------|
| `basic`                 | simple pointer   |
| `null`                  | `nullptr`        |
| `align_right`           | min-width number |
| `align_left`            | `-` flag+number  |
| `less_width`            | `%2p`            |
| `precision`             | `.` flag+numbers |
| `0`                     | `0` flag+number  |
| `plus_space`            | `+`/` ` flags    |
| `mixed`                 | `% -020.10p`     |

### `%d`/`%i` (`di`)

| Name          | What is checked           |
|---------------|---------------------------|
| `basic`       | simple integer            |
| `align_right` | min-width number          |
| `align_left`  | `-` flag+number           |
| `less_width`  | `%1d`/`%1i`               |
| `precision`   | `.` flag+numbers          |
| `0`           | `0` flag+number           |
| `plus_space`  | `+`/` ` flags             |
| `mixed`       | `% -020.10d`/`% -020.10i` |

### `%u` (`u`)

| Name          | What is checked         |
|---------------|-------------------------|
| `basic`       | simple unsigned integer |
| `align_right` | min-width number        |
| `align_left`  | `-` flag+number         |
| `less_width`  | `%1u`                   |
| `precision`   | `.` flag+numbers        |
| `0`           | `0` flag+number         |
| `plus_space`  | `+`/` ` flags           |
| `mixed`       | `% -020.10u`            |

### `%x`/`%X` (`x`)

| Name          | What is checked           |
|---------------|---------------------------|
| `basic`       | simple hexadecimal        |
| `align_right` | min-width number          |
| `align_left`  | `-` flag+number           |
| `less_width`  | `%1x`/`%1X`               |
| `precision`   | `.` flag+numbers          |
| `hash`        | `#` flag+number           |
| `0`           | `0` flag+number           |
| `plus_space`  | `+`/` ` flags             |
| `mixed`       | `% -020.10x`/`% -020.10X` |

### `%%` (`percent`)

| Name    | What is checked |
|---------|-----------------|
| `basic` | `%%`            |
