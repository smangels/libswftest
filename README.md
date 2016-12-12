# libswftest
VCC, provides a test library that can be used to verify internet access and deploy chain

# build
```bash
mkdir build && cd build
cmake ..
cmake --build .
```
# outpout directory
The resulting library can be found under ```build/src/libswftest.a```.

# Deployment to Artifactory

## Configure Artifactory API key
 Note, that one has to configure the jFrogCLI with user-specific API-KEY from VCCs Artifactory instance.
```bash
jfrog rt config
```

## Deploy Build Artifacts
In order to deploy the binary artifacts to a Artifactory instance, just run the following command.
```bash
jfrog rt u --spec artifactory.spec --build-name UAT-SWF
```
