from setuptools import setup, Extension


module = Extension(
      "myModule",
      sources = ["myModule.c"]
)

setup(name = "addition",
      version = 1.0,
      description = "Thsi is a package for addition ",
      ext_modules=[module])