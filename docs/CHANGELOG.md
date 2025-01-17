# v0.4.4 - 2024-10-24

* Package `pjrt`: 
  * Fixed some API documentation issues with Buffer transfers from host.
* Package `xlabuilder`:
  * Fixed `NewArrayLiteral[T dtypes.Supported](flat []T, dimensions ...int)` to create a scalar if no dimensions are passed.

# v0.4.3 - 2024-10-23

* GoMLX XlaBuilder C library is now linked as a static library (`.a` instead of `.so`).
  * Using new Bazel 7.4.0, with support for `cc_static_library`.
* **EXPERIMENTAL** support for Apple/Metal (`darwin-arm64`) support:
  * Added C-wrapper compilation for darwin-arm64.
  * Added converter from HLO to StableHLO -- it greatly increases the size of libgomlx_builder.a, since it has to
    include the whole LLVM :(
    * Enables Apple Metal PJRT -- it only supports StableHLO/MLIR programs (and not the simpler HLO).
    * Only enabled for Darwin
* Updated XLA dependency; Updated PJRT for linux/amd64 CPU.
* Added `Literal.Data()`

# v0.4.2 - 2024-10-03

* Added `IsFinite` and `PopulationCount` operations.

# v0.4.1 - 2024-09-28

* Added memory layout information in buffer-to-host transfers: required for TPU.
* Included C error message when reporting PJRT plugin failures.
* Added GOPJRT_NOSUDO and GOPJRT_INSTALL_DIR to control `cmd/install.sh` and `cmd/install_cuda.sh`.
* Improved installation instructions to install directly from Github using `curl`, without the need to clone the repository.
* Updated `XlaBuilder` C-wrapper to refactorings withing github.com/openxla/xla.

# v0.4.0 - 2024-09-23

* Binary distributed compiled in Ubuntu 24.04 (glibc 2.38), updated dependencies on the C library. This may cause issues in older distributions.
* Added Erf operation.
* Added dtypes.MapOfNames that includes its aliases.
* Updated binary PJRT CPU plugin build, 50% faster in some cases (!)

# v0.3.2

* Added ReduceAnd and ReduceOr logical operations.

# v0.3.1

* Fixed +/-Inf for bfloat16.
* Removed dependencies on "github.com/gomlx/exceptions".

# v0.3.0 Some of the API now returns errors instead of panic

* Moved each compiled XLA proto to their own package under `gopjrt/protos/`: this facilitates conversion to Google3 BUILD scheme.
* Converted several panics to error returning from pjrt and xlabuilder. This means the API changed a bit.
* Added script `cmd/run_coverage.sh`.

# v0.2.4

* Added bfloat16 support.

# v0.2.3

* Fixed check for Nvidia GPU cards so it works within docker images.

# v0.2.2

* Added `install.sh` and `install_cuda.sh`
* `pjrt.AvailablePlugins` now checks that the plugin can be initialized: so if a "cuda" plugin is available in machine
  without an Nvidia GPU, it won't be listed.

# v0.2.1 Improved Donate handling; Added DynamicSlice and DynamicSliceUpdate.

* Execute.NonDonatable -> Execute.DonateNone
* Added Execute.SetDonate
* Use `github.com/dmarkham/enumer` instead of the usual `stringer` for dtypes.
* Fixed double free of C.XlaOp pointers for Identity ops.
* Added `DynamicSlice` and `DynamicSliceUpdate`.
* Added check for matching DTypes for the common ops taking 2 operands.

# v0.2.0 GoMLX integration fixes -- GoMLX more extensive tests caught several small issues in Gopjrt.

* Moved some `dtypes` support functionality from GoMLX to Gopjrt. 
* Added BFloat16 alias.
* Renamed `FromGoType` to `FromGenericsType` and `FromType` to `FromGoType`, to maintain naming consistency.
* Added DType.Memory as an alias to DType.Size.
* Client creation immediately caches addressable devices.
* `Client.AddressableDevices` returns cached value, no errors returned.
* Added `BufferFromHost.ToDeviceNum` to allow specification of the device by device number in the addressable devices list. 
* Added `LoadedExecutable.Execute.OnDeviceNum` to allow  specification of the device by device number in the addressable devices list.
* Removed the awkward `pjrt.FlatDataToRawWithDimensions` and added the more ergonomic `Client.BufferFromHost.FromFlatDataWithDimensions`.
* Added `Buffer.ToFlatDataAndDimensions`
* Store client link with Buffer. Added `Buffer.Client` method.
* Added `Buffer.Device` and `Client.NumForDevice`.
* Properly setting client options for `pjrt.NewClient`. Added test for reading/writing `C.PJRT_NamedValues`.
* Added `xlabuilder.Shape.Memory` and `xlabuilder.NewArrayLiteralFromAny`.
* Added `xlabuilder.Op.Builder()`
* Added comments support to op_types.txt and added comments to several of the operations.
* Renamed `xlabuilder.BatchNorm{Inference,Training}` to `xlabuilder.BatchNormFor{Inference,Training}` 
* Fixed `NewArrayLiteralFromAny` to also accept scalar values, if dimensions is empty.
* Fixed `ReduceWindow` default values and allow setting values to nil.
* Fixed `Pad` to allow missing configuration for axis, per documentation.
* Fixed `ConvertDType` to convert the dtypes to the XLA version `PrimitiveType` before using.

# v0.1.2 SuppressAbseilLoggingHack

* Improved SuppressAbseilLoggingHack to supress only during the execution of a function.

# v0.1.1 New While op

* Added `While` op.
* Improved Mandelbrot example.

# v0.0.1 Initial Release

* `xlabuilder` with good coverage: all ops used by [GoMLX](github.com/gomlx/gomlx).
* `pjrt` with enough functionality coverage for [GoMLX](github.com/gomlx/gomlx) and to execute some Jax functions.
* Documentation for API, examples, one notebook (Mandelbrot) and installation details for CUDA.
* Prebuilt cpu pjrt plugin and C/C++ XlaBuilder libraries for `linux/x86-64`.
