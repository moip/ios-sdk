//
//  MoipSDK.h
//  MoipSDK
//
//  Created by Fernando Nazario Sousa on 05/03/14.
//  Copyright (c) 2014 Moip Pagamentos. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MPKPayment.h"
#import "MPKPaymentTransaction.h"
#import "MPKCreditCardTextField.h"
#import "MPKCVCTextField.h"
#import "MPKError.h"
#import "MPKEnvironment.h"

@interface MoipSDK : NSObject

#pragma mark - Init
+ (MoipSDK *) session;
+ (MoipSDK *) startSessionWithToken:(NSString *)token
                                key:(NSString *)key
                          publicKey:(NSString *)publicKey
                        environment:(MPKEnvironment)env;

#pragma mark - Methods
- (void) submitPayment:(MPKPayment *)payment success:(void (^)(MPKPaymentTransaction *transaction))success failure:(void (^)(NSArray *errorList))failure;

@end