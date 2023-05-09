# Using the Modern C++ Template from CMake

This is an example on how to consume the library from the repository [**Modern C++ template**](https://github.com/jpiqueras/modern-cpp-lib-template).
For just consume the library, a complex `conanfile.py` is not necessary. With only the simpler version `conanfile.txt` is enough.

## Step-by-step tutorial

Open a terminal in the folder you want to clone the repositories and then follow the steps:


1. Clone this repository and change the working folder:

    ```
    git https://github.com/jpiqueras/test-modern-cpp-lib-template.git
    cd test-modern-cpp-lib-template
    ```

2. Create a python virtual environment and install conan (optional if you already have it):

    ```
    python -m venv .venv
    .\.venv\Scripts\activate
    pip install conan
    ```

3. Clone the library and checkout to the version you want. For example, for version `v1.0.1`, run:

    ```
    cd ..
    git clone -b v1.0.1 https://github.com/jpiqueras/modern-cpp-lib-template.git 
    cd modern-cpp-lib-template
    ```

4. Create the package with **conan** so it can be found by CMake

    ```
    conan create . --build==missing
    ```
    **Note:** You need to have a valid conan default profile for this to work. Check the [Modern C++ template documentation](https://jpiqueras.github.io/modern-cpp-lib-template/) for more info. 

5. Navigate back to the "consumer" repository and install it with conan

    ```
    cd ../test-modern-cpp-lib-template
    conan install .
    ```
6. You can now use CMake through the command line or open the project in your IDE


And here are all the commands together:

```
git https://github.com/jpiqueras/test-modern-cpp-lib-template.git
cd test-modern-cpp-lib-template
python -m venv .venv
.\.venv\Scripts\activate
pip install conan
cd ..
git clone -b v1.0.1 https://github.com/jpiqueras/modern-cpp-lib-template.git 
cd modern-cpp-lib-template
conan create . --build==missing
cd ../test-modern-cpp-lib-template
conan install .
``` 