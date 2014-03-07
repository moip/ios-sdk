//
//  CardHolder.h
//  MoipSDK
//
//  Created by Fernando Nazario Sousa on 06/03/14.
//  Copyright (c) 2014 Moip Pagamentos. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(int, CardHolderDocumentType)
{
    CardHolderDocumentTypeCNPJ,
    CardHolderDocumentTypeCPF,
    CardHolderDocumentTypeRG
};

@interface CardHolder : NSObject

@property NSString *fullname;
@property NSString *birthdate;
@property CardHolderDocumentType documentType;
@property NSString *documentNumber;
@property NSString *phoneCountryCode;
@property NSString *phoneAreaCode;
@property NSString *phoneNumber;

@end
