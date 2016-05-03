#import <Mantle/Mantle.h>

@interface RMQTLSOptions : MTLModel

@property (nonatomic, readonly) BOOL useTLS;
@property (nonatomic, readonly) NSString *peerName;
@property (nonatomic, readonly) BOOL verifyPeer;

+ (instancetype)noTLS;
- (instancetype)initWithPeerName:(NSString *)peerName
                      verifyPeer:(BOOL)verifyPeer
                          pkcs12:(NSData *)pkcs12data;

- (NSDictionary *)startTLSOptions;
- (NSString *)authMechanism;

@end
