# entt - Entity component system (ECS) C++ library

This is a `build2` package for the [`EnTT`](https://github.com/skypjack/entt)
C++ library. It provides a header-only, tiny and easy to use entity component
system (ECS) for game programming and much more.


## Usage

To start using `entt` in your project, add the following `depends`
value to your `manifest`, adjusting the version constraint as appropriate:

```
depends: entt ^4.0.0
```

Then import the library in your `buildfile`:

```
import libs = entt%lib{entt}
```


## Importable targets

This package provides the following importable targets:

```
lib{entt}
```

Header-only `EnTT` library.


## Configuration variables

This package provides no configuration variables.
