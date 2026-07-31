if __name__ == "__main__":
    from sys import exit
    from importlib import metadata, import_module
    print("LOADING STATUS: Loading programs...", end="\n\n")
    print("Checking dependencies:")
    dependencies: dict = {
        "pandas": None,
        "numpy": None,
        "matplotlib": None
    }
    missing = list()
    for package in dependencies:
        try:
            dependencies[package] = import_module(package)
        except ModuleNotFoundError:
            missing.append(package)

    if len(missing) > 0:
        print(f"""Missing dependencies! {missing}
Please run pip install -r requirements.txt if you want to use pip
or poetry install --no-root if you want to use Poetry""")
        exit(1)

    for package in dependencies:
        print(f"[OK] {package} ({metadata.version(package)})")

    np = dependencies["numpy"]
    pd = dependencies["pandas"]
    plt = import_module("matplotlib.pyplot")
    print("Analyzing Matrix data...")
    data = dependencies["numpy"].random.normal(loc=50, scale=15, size=1000)

    print("Processing 1000 data points...")
    series = pd.Series(data)
    mean = series.mean()
    std = series.std()

    print("Generating visualization...", end="\n\n")
    plt.hist(data, bins=100)
    plt.xlabel("Age of people in the simulation")
    plt.ylabel("Time spent online (hours)")
    plt.title(f"Distribution (mean={mean:.2f}, std={std:.2f})")
    plt.savefig("matrix_analysis.png")
    print("Analysis complete!")
    print("Results saved to: matrix_analysis.png")
